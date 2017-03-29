#!/bin/bash

CC=/usr/local/linaro-armv7ahf-2015.11-gcc5.2/bin/arm-linux-gnueabihf-gcc
CXX=/usr/local/linaro-armv7ahf-2015.11-gcc5.2/bin/arm-linux-gnueabihf-g++ 
CPP=/usr/local/linaro-armv7ahf-2015.11-gcc5.2/bin/arm-linux-gnueabihf-cpp
./configure --host=arm-linux --prefix=$PWD/../../../../prebuild/gdbserver
make
make install
