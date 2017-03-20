# IMPORTANT build this with kasanojo to avoid host pollution

# first time setup
git submodule update --init --recursive

## This repo leverages the ambarella sdk to include binaries, libraries and prebuilt to the rootfs image

# folder structure
```
+-- uteki
|   +-- apps    :   contains source of hello apps, linked to image with build_app.mk
|   +-- lib     :   contains source of hello libraries, linked to the image with build_lib.mk
|   +-- prebuilt:   contains prebuilt apps and libraries, linked to the image with build_prebuilt.mk
|   +-- external:   contains independent projects that require special handling to be build
|                   planned procedure is to build these first then move the objects to the prebuilt directory
```
