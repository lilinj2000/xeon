#ifndef XEON_SERVER_HH
#define XEON_SERVER_HH

#include <memory>

#include "XeonConfig.hh"
#include "XeleFtdcMduserApi.h"
#include "air/MDataFile.hh"

namespace xeon
{

class XeleMdSpiImpl;

class XeonServer
{
 public:
  XeonServer(int argc, char *argv[]);

  ~XeonServer();

 protected:

  void login();

  void go();

  air::SpeedMData* toSpeedMData(const CXeleMdFtdcDepthMarketDataField* data);

  air::CffexMData* toCffexMData(const CXeleMdFtdcDepthMarketDataField* data);

 private:

  std::unique_ptr<XeonConfig> config_;

  int sock_fd_;

  std::set<std::string> instrus_filter_;

  std::unique_ptr<air::MDataFile> md_file_;

  std::unique_ptr<air::MDataFile> speed_file_;

  std::unique_ptr<XeleMdSpiImpl> xele_md_spi_;
  
  std::unique_ptr<CXeleMdApi> xele_md_api_;
};

};

#endif
