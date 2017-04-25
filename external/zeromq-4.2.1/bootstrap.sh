PATH=$PATH:/usr/local/linaro-armv7ahf-2015.11-gcc5.2/bin
./configure  --host=arm-linux-gnueabihf --prefix=$SYSROOT/usr
make -j $(nproc) && make install

