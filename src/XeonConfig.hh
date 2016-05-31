// Copyright (c) 2010
// All rights reserved.

#ifndef XEON_CONFIG_HH
#define XEON_CONFIG_HH

#include <string>
#include <memory>
#include "soil/Config.hh"

namespace xeon {

namespace po = boost::program_options;

class XeonOptions : public soil::Options {
 public:
  XeonOptions();

  virtual ~XeonOptions();

  virtual po::options_description* configOptions();

  std::string user_id;
  std::string passwd;

  std::string front_address;
  std::string mcast_address;
  std::string nic;

  std::string instrus_filter;
  std::string md_file;
  std::string speed_md_file;

  std::string exchange;
  std::string log_cfg;

 private:
  boost::program_options::options_description config_options_;
};

class XeonConfig {
 public:
  explicit XeonConfig(int argc = 0, char* argv[] = nullptr);
  ~XeonConfig();

  XeonOptions* xeonOptions() {
    return xeon_options_.get();
  }

 private:
  std::auto_ptr<XeonOptions> xeon_options_;
};

};  // namespace xeon

#endif
