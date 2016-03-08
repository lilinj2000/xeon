#include "XeleMdSpiImpl.hh"
#include "XeonLog.hh"

namespace xeon
{

XeleMdSpiImpl::XeleMdSpiImpl()
{
  XEON_TRACE <<"XeleMdSpiImpl::XeleMdSpiImpl()";
}

XeleMdSpiImpl::~XeleMdSpiImpl()
{
  XEON_TRACE <<"XeleMdSpiImpl::~XeleMdSpiImpl()";
}

void XeleMdSpiImpl::OnFrontUserLoginSuccess()
{
  XEON_TRACE <<"XeleMdSpiImpl::OnFrontUserLoginSuccess()";
}

void XeleMdSpiImpl::OnFrontDisconnected(int nReason)
{
  XEON_TRACE <<"XeleMdSpiImpl::OnFrontDisconnected()";

  XEON_ERROR <<"nReason: " <<nReason;
}

};
