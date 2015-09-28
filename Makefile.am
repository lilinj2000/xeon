AUTOMAKE_OPTIONS = foreign

bin_PROGRAMS = xeon
xeon_SOURCES = \
	XeonConfig.cc \
	MData.cc \
	XeleMdSpiImpl.cc \
	XeonServer.cc \
	Main.cc

xeon_CPPFLAGS =  \
		$(BOOST_CPPFLAGS) \
		$(SOIL_CPPFLAGS) \
		$(XELE_CPPFLAGS)


xeon_LDADD = \
	$(BOOST_LIBADD) \
	$(SOIL_LIBADD) \
	$(XELE_LIBADD)


xeon_LDFLAGS = $(LIBADD_DL) -Wl,--no-as-needed -pthread

# header files
noinst_HEADERS = XeonConfig.hh \
	XeonServer.hh \
	XeonLog.hh \
	MData.hh \
	XeleMdSpiImpl.hh

EXTRA_DIST = env.sh.example xeon.cfg.example log.cfg.example

xeondir = $(bindir)
xeon_DATA = $(EXTRA_DIST)
