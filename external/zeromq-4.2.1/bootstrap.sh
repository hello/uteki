./configure --host=arm-linux-gnueabihf --prefix=$PWD/out
make && make install
mv $PWD/out/* $PWD/../../prebuild/libzmq/

