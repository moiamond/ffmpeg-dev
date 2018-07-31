ffmpeg-dev


```
docker build -t moiamond/ffmpeg-dev:windows-build-all .
```

```
docker run moiamond/ffmpeg-dev:windows-build-all    --sandbox-ok=y \
                                                    --ffmpeg-git-checkout-version=n4.0.2 \
                                                    --git-get-latest=y \
                                                    --install-cross-compiler=n \
                                                    --build-ffmpeg-deps=n \
                                                    --disable-nonfree=n \
                                                    --enable-gpl=y \
                                                    --build-intel-qsv=y \
                                                    --compiler-flavors=multi \
                                                    --prefer-stable=y \
                                                    --high-bitdepth=n \
                                                    --build-ffmpeg-static=n \
                                                    --build-ffmpeg-shared=y \
                                                    --build-dvbtee=n \
                                                    --build-libmxf=n \
                                                    --build-mp4box=n \
                                                    --build-mplayer=n \
                                                    --build-vlc=n \
                                                    --build-lsw=n
```