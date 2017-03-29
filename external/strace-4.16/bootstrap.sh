#!/bin/bash

INSTALLDIR=/usr/local/linaro-armv7ahf-2015.11-gcc5.2/bin/
TARGETMACH=arm-linux-gnueabihf

CROSS=$INSTALLDIR$TARGETMACH
CC=$CROSS-gcc
LD=$CROSS-ld
AS=$CROSS-as
CXX=$CROSS-g++

./configure --prefix=$PWD/../../prebuild/strace --host=$TARGETMACH

make
make install
