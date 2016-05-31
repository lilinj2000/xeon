// Copyright (c) 2010
// All rights reserved.

#include <memory>
#include "XeonServer.hh"

int main(int argc, char* argv[]) {
  std::unique_ptr<xeon::XeonServer> server;

  server.reset( new xeon::XeonServer(argc, argv) );

  return 0;
}
