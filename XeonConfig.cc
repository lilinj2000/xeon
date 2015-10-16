#include "XeonConfig.hh"
#include "XeonLog.hh"

#include <fstream>
#include <iostream>
#include <boost/program_options.hpp>

namespace xeon
{

XeonOptions::XeonOptions():
    config_options_("FlashTCPConfigOptions")
{

  namespace po = boost::program_options;

  config_options_.add_options()
      ("xeon.user_id", po::value<std::string>(&user_id), 
       "user id")
      ("xeon.passwd", po::value<std::string>(&passwd), 
       "password")
      ("xeon.front_address", po::value<std::string>(&front_address), 
       "front address")
      ("xeon.mcast_address", po::value<std::string>(&mcast_address), 
       "multicast address")
      ("xeon.nic", po::value<std::string>(&nic), 
       "network interface")

      ("xeon.instrus_filter", po::value<std::string>(&instrus_filter), 
       "instrument")
      ("xeon.md_file", po::value<std::string>(&md_file), 
       "md file")
      ("xeon.speed_md_file", po::value<std::string>(&speed_md_file), 
       "speed md file")

      ("xeon.log_cfg", po::value<std::string>(&log_cfg), 
       "log config file")
      ;

  return;
  
}

XeonOptions::~XeonOptions()
{
}

po::options_description* XeonOptions::configOptions()
{
  return &config_options_;
}

XeonConfig::XeonConfig(int argc, char* argv[])
{
  xeon_options_.reset(new XeonOptions());
      
  std::auto_ptr<soil::Config> config( soil::Config::create() );
  config->registerOptions( xeon_options_.get() );

  config->configFile() = "xeon.cfg";
  config->loadConfig(argc, argv);
  
  // init the log
  XEON_LOG_INIT( xeon_options_->log_cfg );
  
  return;
}

XeonConfig::~XeonConfig()
{
}

};  
