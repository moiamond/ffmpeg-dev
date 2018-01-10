#!/usr/bin/env bash

cpu_count="$(grep -c processor /proc/cpuinfo 2>/dev/null)" # linux cpu count
if [ -z "$cpu_count" ]; then
  cpu_count=`sysctl -n hw.ncpu | tr -d '\n'` # OS X
  if [ -z "$cpu_count" ]; then
    echo "warning, unable to determine cpu count, defaulting to 1"
    cpu_count=1 # else default to just 1, instead of blank, which means infinite
  fi
fi

install_cross_compiler() {
  local win32_gcc="cross_compilers/mingw-w64-i686/bin/i686-w64-mingw32-gcc"
  local win64_gcc="cross_compilers/mingw-w64-x86_64/bin/x86_64-w64-mingw32-gcc"
  
  compiler_flavors=multi

  mkdir -p cross_compilers
  cd cross_compilers

    unset CFLAGS # don't want these "windows target" settings used the compiler itself since it creates executables to run on the local box (we have a parameter allowing them to set them for the script "all builds" basically)
    # pthreads version to avoid having to use cvs for it
    echo "starting to download and build cross compile version of gcc [requires working internet access] with thread count $cpu_count..."
    echo ""

    # --disable-shared allows c++ to be distributed at all...which seemed necessary for some random dependency which happens to use/require c++...
    local zeranoe_script_name=mingw-w64-build-r22.local
    local zeranoe_script_options="--gcc-ver=7.1.0 --default-configure --cpu-count=$cpu_count --pthreads-w32-ver=2-9-1 --disable-shared --clean-build --verbose --allow-overwrite" # allow-overwrite to avoid some crufty prompts if I do rebuilds [or maybe should just nuke everything...]
    cp ../$zeranoe_script_name .

    echo "building win32 cross compiler..."
    nice ./$zeranoe_script_name $zeranoe_script_options --build-type=win32 || exit 1

    echo "building win64 x86_64 cross compiler..."
    nice ./$zeranoe_script_name $zeranoe_script_options --build-type=win64 || exit 1 

    rm -f build.log # left over stuff...
  cd ..
  echo "Done building (or already built) MinGW-w64 cross-compiler(s) successfully..."
  echo `date` # so they can see how long it took :)
}

install_cross_compiler