
FROM moiamond/ffmpeg-dev:base
LABEL maintainer="moiamond@gmail.com"

USER root
WORKDIR /build

# copy some files
COPY install_cross_compiler.sh .
COPY patches ./patches/

RUN ./install_cross_compiler.sh
