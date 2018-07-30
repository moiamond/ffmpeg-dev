
FROM ubuntu:xenial
LABEL maintainer="moiamond@gmail.com"

ARG DEBIAN_FRONTEND=noninteractive
ARG user=docker
ARG group=docker
ARG password=docker

RUN apt-get update && apt-get install -y \
        sudo \
        subversion \
        curl \
        texinfo \
        g++ \
        bison \
        flex \
        cvs \
        yasm \
        automake \
        libtool \
        autoconf \
        gcc \
        cmake \
        git \
        make \
        pkg-config \
        zlib1g-dev \
        mercurial \
        unzip \
        pax \
        wget \
        xz-utils \
        ed \
        nasm \
        gperf \
        autogen \
        bzip2 \
        autoconf-archive \
        && rm -rf /var/lib/apt/list/*

# create login group / user
RUN groupadd $group \
        && useradd -m -g $group -s /bin/bash -G sudo $user \
        && echo "$user:$password" | chpasswd

WORKDIR /home/$user

# copy some files
COPY .dircolors .
# own it
RUN chown -R $user:$group .

# modify .bashrc
# set TERM and PS1
RUN sed -i '1i export TERM=xterm-256color\n' .bashrc \
	&& sed -i '/if \[ "$color_prompt"/{n;s/.*/    PS1='\''${debian_chroot:+($debian_chroot)}\\[\\033[01;32m\\]\\u@\\h\\[\\033[00m\\]:\\[\\033[00;38;5;33m\\]\\w\\[\\033[00m\\] \\$ '\''/;}' .bashrc

# remove CR from files git cloned on Windows in case core.autocrlf=true|input
RUN sed -i 's/\r//g' .dircolors

USER $user
