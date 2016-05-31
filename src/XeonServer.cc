// Copyright (c) 2010
// All rights reserved.

#include "XeonServer.hh"
#include "XeonLog.hh"
#include "XeleMdSpiImpl.hh"
#include "XeleMdFtdcUserApiStructPrint.hh"
#include "soil/Macro.hh"

namespace xeon {

XeonServer::XeonServer(int argc, char* argv[]):
    sock_fd_(-1),
    xele_md_api_(nullptr) {
  XEON_TRACE <<"XeonServer::XeonServer()";

  try {
    config_.reset( new XeonConfig(argc, argv) );

    if (!config_->xeonOptions()->md_file.empty()) {
      md_file_.reset(new air::MDataFile(config_->xeonOptions()->md_file,
                                        config_->xeonOptions()->instrus_filter));  // NOLINT(whitespace/line_length)
    }

    if (!config_->xeonOptions()->speed_md_file.empty()) {
      speed_file_.reset(new air::MDataFile(config_->xeonOptions()->speed_md_file,  // NOLINT(whitespace/line_length)
                                           config_->xeonOptions()->instrus_filter));  // NOLINT(whitespace/line_length)
    }

    xele_md_spi_.reset(new XeleMdSpiImpl());
    xele_md_api_ = CXeleMdApi::CreateMdApi(xele_md_spi_.get());

    login();

    if (config_->xeonOptions()->exchange == "cffex") {
      cffexMd();
    }
#ifdef XELEMD_R972
    else if (config_->xeonOptions()->exchange == "shfe") {  // NOLINT(*)
      shfeMd();
    }
#endif
  }
  catch(std::exception& e) {
    XEON_ERROR <<e.what();
  }
}

XeonServer::~XeonServer() {
  XEON_TRACE <<"XeonServer::~XeonServer()";

  xele_md_api_->Release();
}

void XeonServer::login() {
  XEON_TRACE <<"XeonServer::login()";

  CXeleMdFtdcReqUserLoginField login_info;
  memset(&login_info, 0x0, sizeof(login_info));

  S_INPUT(&login_info, CXeleMdFtdcReqUserLoginField, UserID, config_->xeonOptions()->user_id.data());  // NOLINT(whitespace/line_length)
  S_INPUT(&login_info, CXeleMdFtdcReqUserLoginField, Password, soil::Options::escapeHash(config_->xeonOptions()->passwd).data());  // NOLINT(whitespace/line_length)
  S_INPUT(&login_info, CXeleMdFtdcReqUserLoginField, ProtocolInfo, "protocol");  // NOLINT(whitespace/line_length)

  XEON_DEBUG <<config_->xeonOptions()->front_address;
  XEON_DEBUG <<config_->xeonOptions()->mcast_address;
  XEON_DEBUG <<config_->xeonOptions()->nic;

  XEON_DEBUG <<login_info;

  int ret = xele_md_api_->LoginInit(config_->xeonOptions()->front_address.data(),  // NOLINT(whitespace/line_length)
                                    config_->xeonOptions()->mcast_address.data(),  // NOLINT(whitespace/line_length)
                                    config_->xeonOptions()->nic.data(),
                                    &login_info);
  if (ret == XELEAPI_SUCCESS) {
    XEON_INFO <<"Login Success.";
  } else {
    throw std::runtime_error("Login failed.");
  }
}

#ifdef XELEMD_R972
void XeonServer::shfeMd() {
  XEON_TRACE <<"XeonServer::shfeMd()";

  int handle = xele_md_api_->GetHandle();

  CXeleShfeMarketDataUnion mdtick;
  memset(&mdtick, 0x0, sizeof(mdtick));

  CXeleShfeLowLevelOneMarketData low_data;
  memset(&low_data, 0x0, sizeof(low_data));

  do {
    if (RecvShfeMarketDataTick(handle, &mdtick)) {
      if (mdtick.md_type[0] == 'M') {
        if (speed_file_.get()) {
          speed_file_->putData(toSpeedMData(&(mdtick.type_high)));
        }

        if (md_file_.get()) {
          md_file_->putData(toShfeMData(&low_data,  &(mdtick.type_high)));
        }

        // XEON_DEBUG <<mdtick.type_high;
      } else if (mdtick.md_type[0] == 'S') {
        memcpy(&low_data, &(mdtick.type_low), sizeof(low_data));
        // XEON_DEBUG <<mdtick.type_low;
      } else if (mdtick.md_type[0] == 'Q') {
        // XEON_DEBUG <<mdtick.type_depth;
      }
    }
  }while(true);
}
#endif

void XeonServer::cffexMd() {
  XEON_TRACE <<"XeonServer::cffexMd()";

  XEON_INFO <<"version: " <<xele_md_api_->GetVersion();

#ifdef XELEMD_R972
  int handle = xele_md_api_->GetHandle();
#endif
  MarketDataTick tick;
  do {
#ifdef XELEMD_R800
    if (xele_md_api_->RecvMarketDataTick(&tick)) {
#elif defined XELEMD_R972
    if (RecvMarketDataTick(handle, &tick)) {
#endif
      if (speed_file_.get()) {
        speed_file_->putData(toSpeedMData(&(tick.data)));
      }

      if (md_file_.get()) {
        md_file_->putData(toCffexMData(&(tick.data)));
      }
    }
  }while(true);
}

air::SpeedMData* XeonServer::toSpeedMData(const CXeleMdFtdcDepthMarketDataField* data) {  // NOLINT(whitespace/line_length)
  std::unique_ptr<air::SpeedMData> speed_data(new air::SpeedMData());

  speed_data->instru = data->InstrumentID;
  speed_data->update_time = data->UpdateTime;
  speed_data->update_millisec = data->UpdateMillisec;

  return speed_data.release();
}

#ifdef XELEMD_R972
air::SpeedMData* XeonServer::toSpeedMData(const CXeleShfeHighLevelOneMarketData* data) {  // NOLINT(whitespace/line_length)
  std::unique_ptr<air::SpeedMData> speed_data(new air::SpeedMData());

  speed_data->instru = data->Instrument;
  speed_data->update_time = data->UpdateTime;
  speed_data->update_millisec = data->UpdateMillisec;

  return speed_data.release();
}

air::ShfeMData* XeonServer::toShfeMData(const CXeleShfeLowLevelOneMarketData* low_data,  // NOLINT(whitespace/line_length)
                                        const CXeleShfeHighLevelOneMarketData* high_data) {  // NOLINT(whitespace/line_length)
  std::unique_ptr<air::ShfeMData> shfe_data(new air::ShfeMData());

  // shfe_data->TradingDay
  shfe_data->InstrumentID = high_data->Instrument;
  // std::string ExchangeID;
  // std::string ExchangeInstID;
  shfe_data->LastPrice = high_data->LastPrice;
  // double PreSettlementPrice;
  // double PreClosePrice;
  // double PreOpenInterest;
  shfe_data->OpenPrice = low_data->OpenPrice;
  shfe_data->HighestPrice = low_data->HighestPrice;
  shfe_data->LowestPrice = low_data->LowestPrice;
  shfe_data->Volume = high_data->Volume;
  shfe_data->Turnover = high_data->Turnover;
  shfe_data->OpenInterest = high_data->OpenInterest;
  shfe_data->ClosePrice = low_data->ClosePrice;
  shfe_data->SettlementPrice = low_data->SettlementPrice;
  shfe_data->UpperLimitPrice = low_data->UpperLimitPrice;
  shfe_data->LowerLimitPrice = low_data->LowerLimitPrice;
  // double PreDelta;
  shfe_data->CurrDelta = low_data->CurrDelta;
  shfe_data->UpdateTime = high_data->UpdateTime;
  shfe_data->UpdateMillisec = high_data->UpdateMillisec;
  shfe_data->BidPrice1 = high_data->BidPrice;
  shfe_data->BidVolume1 = high_data->BidVolume;
  shfe_data->AskPrice1 = high_data->AskPrice;
  shfe_data->AskVolume1 = high_data->AskVolume;
  // double BidPrice2;
  // double BidVolume2;
  // double AskPrice2;
  // double AskVolume2;
  // double BidPrice3;
  // double BidVolume3;
  // double AskPrice3;
  // double AskVolume3;
  // double BidPrice4;
  // double BidVolume4;
  // double AskPrice4;
  // double AskVolume4;
  // double BidPrice5;
  // double BidVolume5;
  // double AskPrice5;
  // double AskVolume5;
  // double AveragePrice;
  // std::string ActionDay;

  return shfe_data.release();
}
#endif

air::CffexMData* XeonServer::toCffexMData(const CXeleMdFtdcDepthMarketDataField* data) {  // NOLINT(whitespace/line_length)
  std::unique_ptr<air::CffexMData> cffex_data(new air::CffexMData());

  // cffex_data->TradingDay = data->TradingDay;
  // cffex_data->SettlementGroupID = data->SettlementGroupID;
  // cffex_data->SettlementID = data->SettlementID;
  // cffex_data->PreSettlementPrice = data->PreSettlementPrice;
  // cffex_data->PreClosePrice = data->PreClosePrice;
  // cffex_data->PreOpenInterest = data->PreOpenInterest;
  // cffex_data->PreDelta = data->PreDelta;
  cffex_data->OpenPrice = data->OpenPrice;
  cffex_data->HighestPrice = data->HighestPrice;
  cffex_data->LowestPrice = data->LowestPrice;
  cffex_data->ClosePrice = data->ClosePrice;
  cffex_data->UpperLimitPrice = data->UpperLimitPrice;
  cffex_data->LowerLimitPrice = data->LowerLimitPrice;
  cffex_data->SettlementPrice = data->SettlementPrice;
  cffex_data->CurrDelta = data->CurrDelta;
  cffex_data->LastPrice = data->LastPrice;
  cffex_data->Volume = data->LastPrice;
  cffex_data->Turnover = data->Turnover;
  cffex_data->OpenInterest = data->OpenInterest;

  cffex_data->BidPrice1 = data->BidPrice1;
  cffex_data->BidVolume1 = data->BidVolume1;
  cffex_data->AskPrice1 = data->AskPrice1;
  cffex_data->AskVolume1 = data->AskVolume1;

  cffex_data->BidPrice2 = data->BidPrice2;
  cffex_data->BidVolume2 = data->BidVolume2;
  cffex_data->AskPrice2 = data->AskPrice2;
  cffex_data->AskVolume2 = data->AskVolume2;

  cffex_data->BidPrice3 = data->BidPrice3;
  cffex_data->BidVolume3 = data->BidVolume3;
  cffex_data->AskPrice3 = data->AskPrice3;
  cffex_data->AskVolume3 = data->AskVolume3;

  cffex_data->BidPrice4 = data->BidPrice4;
  cffex_data->BidVolume4 = data->BidVolume4;
  cffex_data->AskPrice4 = data->AskPrice4;
  cffex_data->AskVolume4 = data->AskVolume4;

  cffex_data->BidPrice5 = data->BidPrice5;
  cffex_data->BidVolume5 = data->BidVolume5;
  cffex_data->AskPrice5 = data->AskPrice5;
  cffex_data->AskVolume5 = data->AskVolume5;

  cffex_data->InstrumentID = data->InstrumentID;
  cffex_data->UpdateTime = data->UpdateTime;
  cffex_data->UpdateMillisec = data->UpdateMillisec;

  return cffex_data.release();
}

}  // namespace xeon
