FROM moiamond/ffmpeg-dev:crosstools-win
LABEL maintainer="moiamond@gmail.com"

WORKDIR /build

COPY cross_compile_ffmpeg.sh .
COPY patches ./patches/

CMD         ["--help"]
ENTRYPOINT  ["./cross_compile_ffmpeg.sh"]