# IMPORTANT build this with kasanojo to avoid host pollution

# first time setup
git submodule update --init --recursive

## This repo leverages the ambarella sdk to include binaries, libraries and prebuilt to the rootfs image

# folder structure
```
+-- uteki
|   +-- apps    :   Contains source of hello apps, linked to image with build_app.mk
|   +-- lib     :   Contains source of hello libraries, linked to the image with build_lib.mk
|   +-- prebuild:   Contains prebuilt apps and libraries, linked to the image with build_prebuilt.mk
|   +-- external:   Contains external projects and libraries that are linked to prebuild/ folder
|   |               They are for our convenience and is not required to be built everytime
|   |  +-- {project}
|   |  |  +-- bootstrap.sh :    At the core of each project contains bootstrap.sh, which is responsible for cross compiling
|                               each project and moving the relevant binaries to the the prebuild folder.
```
