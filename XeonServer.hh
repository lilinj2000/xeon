#ifndef XEON_SERVER_HH
#define XEON_SERVER_HH

#include <memory>

#include "XeonConfig.hh"
#include "XeleFtdcMduserApi.h"
#include "air/MData.hh"

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

 private:

  std::auto_ptr<XeonConfig> config_;

  int sock_fd_;

  std::set<std::string> instrus_filter_;

  std::auto_ptr<air::MData> md_file_;

  std::auto_ptr<XeleMdSpiImpl> xele_md_spi_;
  
  std::auto_ptr<CXeleMdApi> xele_md_api_;
};

};

#endif
