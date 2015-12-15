AUTOMAKE_OPTIONS = foreign

bin_PROGRAMS = xeon
xeon_SOURCES = \
	XeonConfig.cc \
	XeleMdSpiImpl.cc \
	XeonServer.cc \
	Main.cc

xeon_CPPFLAGS =  \
		$(BOOST_CPPFLAGS) \
		$(SOIL_CPPFLAGS) \
		$(XELEMD_CPPFLAGS) \
		$(AIR_CPPFLAGS)


xeon_LDADD = \
	$(BOOST_LIBADD) \
	$(SOIL_LIBADD) \
	$(XELEMD_LIBADD) \
	$(AIR_LIBADD)


xeon_LDFLAGS = $(LIBADD_DL) -Wl,--no-as-needed -pthread -lrt

# header files
noinst_HEADERS = XeonConfig.hh \
	XeonServer.hh \
	XeonLog.hh \
	XeleMdSpiImpl.hh \
	XeleMdFtdcUserApiStructPrint.hh \
	XeleMdFtdcUserApiStructPrint_r800.hh \
	XeleMdFtdcUserApiStructPrint_r972.hh

installed_data = env.sh.example xeon.cfg.example log.cfg.example
noinst_data = deploy.sh
EXTRA_DIST = $(installed_data) $(noinst_data)

xeondir = $(bindir)
xeon_DATA = $(installed_data)
