#include <memory>
#include "XeonServer.hh"

int main(int argc, char* argv[])
{

  std::auto_ptr<xeon::XeonServer> server;

  server.reset( new xeon::XeonServer(argc, argv) );
  
  return 0;

}
