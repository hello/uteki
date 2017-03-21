./configure --host=arm-linux-gnueabihf --prefix=$PWD/out
make -j $(nproc) && make install
mv $PWD/out/* $PWD/../../prebuild/libzmq/usr/

