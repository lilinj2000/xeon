// Copyright (c) 2010
// All rights reserved.

#ifndef XELE_MD_SPI_HH
#define XELE_MD_SPI_HH

#include "XeleFtdcMduserApi.h"

namespace xeon {

class XeleMdSpiImpl : public CXeleMdSpi {
 public:
  XeleMdSpiImpl();

  virtual ~XeleMdSpiImpl();

  virtual void OnFrontUserLoginSuccess();

  virtual void OnFrontDisconnected(int nReason);
};

};  // namespace xeon

#endif
