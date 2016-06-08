#! /bin/sh

home_app=~/app

home_xeon=${home_app}/xeon

./configure --prefix=${home_xeon}

if test -d ${home_xeon}; then
    rm -rf ${home_xeon}
fi

make install

make distclean
