
home_3rd=~/3rd

if test -d /llj/3rd ; then
   home_3rd=/llj/3rd
fi

export LD_LIBRARY_PATH=$home_3rd/boost/lib

