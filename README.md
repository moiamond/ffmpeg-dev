ffmpeg-dev


```
docker build -t moiamond/ffmpeg-dev:windows-build .
```

```
docker run moiamond/ffmpeg-dev:windows-build    --sandbox-ok=y \
                                                --ffmpeg-git-checkout-version=master \
                                                --build-libmxf=n \
                                                --build-mp4box=n \
                                                --build-ismindex=n \
                                                --git-get-latest=y \
                                                --build-intel-qsv=y \
                                                --build-x264-with-libav=n \
                                                --build-mplayer=n \
                                                --cflags='-mtune=generic -O3' \
                                                --build-vlc=n \
                                                --build-lsw=n \
                                                --build-dvbtee=n \
                                                --disable-nonfree=n \
                                                --compiler-flavors=multi \
                                                --build-ffmpeg-static=y \
                                                --build-ffmpeg-shared=n \
                                                --prefer-stable=y \
                                                --enable-gpl=y \
                                                --high-bitdepth=n \
                                                --debug
```