#!/bin/sh
sfs=`find . -name '*.cpp'`
echo >Makefile.am
echo AM_CXXFLAGS=-DUSING_LOG4CXX=1 -L/opt/local/lib -I/opt/local/include>>Makefile.am
echo bin_PROGRAMS=SyncBuilder>>Makefile.am
echo "LIBS=\$(BOOST_DATE_TIME_LIB) \$(BOOST_FILESYSTEM_LIB) \$(BOOST_REGEX_LIB) \$(BOOST_THREAD_LIB) \$(BOOST_SYSTEM_LIB) \$(LOG4CXX_LIBS) \$(EXTC_LDFLAGS) \$(LOG4CXX_LDFLAGS) -lcurl">>Makefile.am
echo SyncBuilder_SOURCES=$sfs>>Makefile.am
