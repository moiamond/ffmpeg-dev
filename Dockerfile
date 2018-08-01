FROM moiamond/ffmpeg-dev:install-deps
LABEL maintainer="moiamond@gmail.com"

WORKDIR /build

RUN sed -i "s/rm -rf \/build\/sandbox\/win*/##/g" cross_compile_ffmpeg.sh

CMD         ["--help"]
ENTRYPOINT  ["./cross_compile_ffmpeg.sh"]