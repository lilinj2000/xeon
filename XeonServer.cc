#include "XeonServer.hh"
#include "XeonLog.hh"
#include "XeleMdSpiImpl.hh"
#include "XeleMdFtdcUserApiStructPrint.hh"

#include <stddef.h>

#define MEMB_SIZEOF(st_type, member) sizeof(((st_type*)0)->member)
#define MEMB_CHARPTR(ptr, st_type, member) ((char*)ptr + offsetof(st_type, member))
#define M_INPUT(ptr, CField, member, src) memcpy(MEMB_CHARPTR(ptr, CField, member), src, MEMB_SIZEOF(CField, member))
#define S_INPUT(ptr, CField, member, src) strncpy(MEMB_CHARPTR(ptr, CField, member), src, MEMB_SIZEOF(CField, member))


namespace xeon
{

XeonServer::XeonServer(int argc, char* argv[]):
    sock_fd_(-1)
{
  XEON_TRACE <<"XeonServer::XeonServer()";

  try
  {
    config_.reset( new XeonConfig(argc, argv) );

    if( !config_->xeonOptions()->md_file.empty() )
    {
      md_file_.reset( new air::MDataFile(config_->xeonOptions()->md_file,
                                         config_->xeonOptions()->instrus_filter) );
    }

    if( !config_->xeonOptions()->speed_md_file.empty() )
    {
      speed_file_.reset( new air::MDataFile(config_->xeonOptions()->speed_md_file,
                                            config_->xeonOptions()->instrus_filter) );
    }

    xele_md_spi_.reset( new XeleMdSpiImpl() );
    xele_md_api_.reset( CXeleMdApi::CreateMdApi(xele_md_spi_.get()) );

    login();

    go();
  }
  catch( std::exception& e)
  {
    XEON_ERROR <<e.what();
  }
}

XeonServer::~XeonServer()
{
  XEON_TRACE <<"XeonServer::~XeonServer()";
}

void XeonServer::login()
{
  XEON_TRACE <<"XeonServer::login()";

  CXeleMdFtdcReqUserLoginField login_info;
  memset(&login_info, 0x0, sizeof(login_info));
  
  S_INPUT(&login_info, CXeleMdFtdcReqUserLoginField, UserID, config_->xeonOptions()->user_id.data());
  S_INPUT(&login_info, CXeleMdFtdcReqUserLoginField, Password, config_->xeonOptions()->passwd.data());
  S_INPUT(&login_info, CXeleMdFtdcReqUserLoginField, ProtocolInfo, "protocol");

  XEON_DEBUG <<config_->xeonOptions()->front_address;
  XEON_DEBUG <<config_->xeonOptions()->mcast_address;
  XEON_DEBUG <<config_->xeonOptions()->nic;

  XEON_DEBUG <<login_info;

  int ret = xele_md_api_->LoginInit(config_->xeonOptions()->front_address.data(),
                                    config_->xeonOptions()->mcast_address.data(),
                                    config_->xeonOptions()->nic.data(),
                                    &login_info);
  if( ret==XELEAPI_SUCCESS )
  {
    XEON_INFO <<"Login Success.";
  }
  else
  {
    xele_md_api_->Release();

    throw std::runtime_error("Login failed.");
  }
  
}

void XeonServer::go()
{
  XEON_TRACE <<"XeonServer::go()";

  XEON_INFO <<"version: " <<xele_md_api_->GetVersion();

  MarketDataTick tick;
  do
  {
    if( xele_md_api_->RecvMarketDataTick(&tick) )
    {

      if( speed_file_.get() )
      {
        speed_file_->putData( toSpeedMData(&(tick.data)) );
      }

      if( md_file_.get() )
      {
        md_file_->putData( toCffexMData(&(tick.data)) );
      }
        
    }
    
  }while( true );
  
}

air::SpeedMData* XeonServer::toSpeedMData(const CXeleMdFtdcDepthMarketDataField* data)
{
  std::auto_ptr<air::SpeedMData> speed_data(new air::SpeedMData());
  
  speed_data->instru = data->InstrumentID;
  speed_data->update_time = data->UpdateTime;
  speed_data->update_millisec = data->UpdateMillisec;
  speed_data->time_stamp = boost::posix_time::microsec_clock::local_time();

  return speed_data.release();

}

air::CffexMData* XeonServer::toCffexMData(const CXeleMdFtdcDepthMarketDataField* data)
{
  std::auto_ptr<air::CffexMData> cffex_data(new air::CffexMData());

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

};
