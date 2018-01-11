ffmpeg-dev


```
docker build -t moiamond/ffmpeg-dev:windows-build-apps .
```

```
docker run moiamond/ffmpeg-dev:windows-build-apps    --sandbox-ok=y \
                                                    --ffmpeg-git-checkout-version=master \
                                                    --git-get-latest=y \
                                                    --disable-nonfree=n \
                                                    --enable-gpl=y \
                                                    --build-intel-qsv=y \
                                                    --compiler-flavors=multi \
                                                    --prefer-stable=y \
                                                    --high-bitdepth=n \
                                                    --build-ffmpeg-static=y \
                                                    --build-ffmpeg-shared=n \
                                                    --build-dvbtee=n \
                                                    --build-libmxf=n \
                                                    --build-mp4box=n \
                                                    --build-mplayer=n \
                                                    --build-vlc=n \
                                                    --build-lsw=n
```