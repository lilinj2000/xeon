#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.63])
AC_INIT(xeon, 0.1, lilinj2000@gmail.com)
AC_CONFIG_SRCDIR([])
#AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE

AC_CONFIG_MACRO_DIR([m4])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC

# Checks for libraries.
LT_INIT
AC_PROG_RANLIB
# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
#AC_CHECK_HEADER_STDBOOL

AX_CXX_COMPILE_STDCXX_11([noext],[mandatory])

# Checks for library functions.
LT_RELEASE=0.1
LT_CURRENT=0
LT_REVISION=1
LT_AGE=0
AC_SUBST(LT_RELEASE)
AC_SUBST(LT_CURRENT)
AC_SUBST(LT_REVISION)
AC_SUBST(LT_AGE)

home_3rd=~/3rd
home_libs=~/libs

dnl boost lib
AC_ARG_WITH([boost],
    [AS_HELP_STRING([--with-boost],
        [home path of the boost, defaults to $home_3rd/boost])],
    [BOOST_HOME="$withval"],
    [BOOST_HOME="$home_3rd/boost"])
AC_SUBST([BOOST_HOME])

BOOST_CPPFLAGS="-I$BOOST_HOME/include -DBOOST_ALL_DYN_LINK"
BOOST_LIBADD="$BOOST_HOME/lib/libboost_log_setup.so \
              $BOOST_HOME/lib/libboost_log.so \
	      $BOOST_HOME/lib/libboost_filesystem.so \
  	      $BOOST_HOME/lib/libboost_program_options.so \
	      $BOOST_HOME/lib/libboost_regex.so \
	      $BOOST_HOME/lib/libboost_thread.so \
	      $BOOST_HOME/lib/libboost_chrono.so \
	      $BOOST_HOME/lib/libboost_date_time.so \
	      $BOOST_HOME/lib/libboost_system.so \
	      $BOOST_HOME/lib/libboost_atomic.so"
AC_SUBST(BOOST_CPPFLAGS)
AC_SUBST(BOOST_LIBADD)

dnl Xele_Md lib
XELEMD_R800=$home_3rd/xelemd_api_r800
XELEMD_R972=$home_3rd/xelemd_api_r972
XELEMD_R1248=$home_3rd/xelemd_api_r1248
XELEMD_HOME=$XELEMD_R1248
XELEMD_VER=XELEMD_R1248
AC_ARG_WITH([xelemd],
    [AS_HELP_STRING([--with-xelemd],
        [home path of the xelemd, defaults to $XELEMD_HOME])],
    [XELEMD_HOME="$withval"],
    [XELEMD_HOME="$XELEMD_HOME"])
AC_SUBST([XELE_HOMEMD])

AC_ARG_WITH([xelemd-ver],
    [AS_HELP_STRING([--with-xelemd-ver],
        [version of the xelemd api, defaults to $XELEMD_VER])],
    [XELEMD_VER="$withval"],
    [XELEMD_VER="$XELEMD_VER"])
AC_SUBST([XELEMD_VER])

XELEMD_CPPFLAGS="-I$XELEMD_HOME -D$XELEMD_VER"
XELEMD_LIBADD="$XELEMD_HOME/libXeleMdAPI64.a"
AC_SUBST(XELEMD_CPPFLAGS)
AC_SUBST(XELEMD_LIBADD)

dnl soil lib
AC_ARG_WITH([soil],
    [AS_HELP_STRING([--with-soil],
        [home path of the soil, defaults to $home_libs/soil])],
    [SOIL_HOME="$withval"],
    [SOIL_HOME="$home_libs/soil"])
AC_SUBST([SOIL_HOME])

SOIL_CPPFLAGS="-I$SOIL_HOME/include"
SOIL_LIBADD="$SOIL_HOME/lib/libsoil.la"
AC_SUBST(SOIL_CPPFLAGS)
AC_SUBST(SOIL_LIBADD)

dnl air lib
AC_ARG_WITH([air],
    [AS_HELP_STRING([--with-air],
        [home path of the air, defaults to $home_libs/air])],
    [AIR_HOME="$withval"],
    [AIR_HOME="$home_libs/air"])
AC_SUBST([AIR_HOME])

AIR_CPPFLAGS="-I$AIR_HOME/include"
AIR_LIBADD="$AIR_HOME/lib/libair.la"
AC_SUBST(AIR_CPPFLAGS)
AC_SUBST(AIR_LIBADD)



AC_OUTPUT([
	Makefile
	src/Makefile])


