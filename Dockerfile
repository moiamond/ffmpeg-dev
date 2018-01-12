FROM moiamond/ffmpeg-dev:crosstools-win
LABEL maintainer="moiamond@gmail.com"

WORKDIR /build

COPY cross_compile_ffmpeg.sh .
COPY patches ./patches/

RUN ./cross_compile_ffmpeg.sh   --sandbox-ok=y \
                                --build-amd-amf=y \
                                --build-intel-qsv=y \
                                --git-get-latest=y \
                                --disable-nonfree=n \
                                --compiler-flavors=win32 \
                                --prefer-stable=y \
                                --enable-gpl=y \
                                --high-bitdepth=n