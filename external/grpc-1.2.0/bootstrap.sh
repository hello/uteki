#from https://github.com/grpc/grpc/issues/9719
#########################################################
# Set up GRPC for the container host, as it's required to cross compile grpc.
make -j $(nproc) && make install

cd third_party/protobuf \
    && ./autogen.sh \
    && ./configure \
    && make \
    && make install


#########################################################
# Cross compile now
# make sure to source the correct environments armv7ahf-linaro-gcc.env
make plugins
export GRPC_CROSS_COMPILE=true
export GRPC_CROSS_AROPTS='cr --target=elf32-little'
make -j $(nproc) \
    prefix=$(PWD)/out \
    HAS_PKG_CONFIG=false \
    CC="$CROSS_COMPILE"gcc \
    CXX="$CROSS_COMPILE"g++ \
    RANLIB="$CROSS_COMPILE"ranlib \
    LD="$CROSS_COMPILE"ld \
    LDXX="$CROSS_COMPILE"g++ \
    AR="$CROSS_COMPILE"ar \
    PROTOBUF_CONFIG_OPTS="--host=arm-linux-gnueabihf --with-protoc=/usr/local/bin/protoc" static
