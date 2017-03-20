#!/bin/bash
PATH=$PATH:/usr/local/linaro-armv7ahf-2015.11-gcc5.2/bin
./configure --prefix=$($PWD) CC=arm-linux-gnueabihf-gcc --host=arm --disable-zlib
make
