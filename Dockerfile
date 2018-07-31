
FROM moiamond/ffmpeg-dev:crosstools-win
LABEL maintainer="moiamond@gmail.com"

WORKDIR /build

COPY cross_compile_ffmpeg.sh .
COPY patches ./patches/


RUN chmod +x ./cross_compile_ffmpeg.sh && \
    ./cross_compile_ffmpeg.sh   --sandbox-ok=y \
                                --install-cross-compiler=n \
                                --build-ffmpeg-deps=y \
                                --build-ffmpeg-static=n \
                                --build-ffmpeg-shared=n \
                                --build-amd-amf=y \
                                --build-intel-qsv=y \
                                --git-get-latest=y \
                                --disable-nonfree=n \
                                --compiler-flavors=multi \
                                --prefer-stable=y \
                                --enable-gpl=y \
                                --high-bitdepth=n