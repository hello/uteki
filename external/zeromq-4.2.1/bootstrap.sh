PATH=$PATH:/usr/local/linaro-armv7ahf-2015.11-gcc5.2/bin
./configure  --host=arm-linux-gnueabihf --prefix=$PWD/out
make -j $(nproc) && make install
mv $PWD/out/* $PWD/../../prebuild/libzmq/usr/

