#!/bin/bash
./configure --prefix="$PWD/out" CC=arm-linux-gnueabihf-gcc --host=arm --disable-zlib
make && make install
mv $PWD/out/* $PWD/../../prebuild/dropbear/
