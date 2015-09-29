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

    md_file_.reset( new air::MData(config_->xeonOptions()->md_file,
                              config_->xeonOptions()->instrus_filter) );

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
      md_file_->pushMData( tick.data.InstrumentID,
                           tick.data.UpdateTime,
                           tick.data.UpdateMillisec);
    }
    
  }while( true );

  
}

};
