cmake_minimum_required(VERSION 3.6)
project(fakex11)

set(SOURCE_FILES x11.c)
ADD_LIBRARY (fakeX11 STATIC x11.c)

install(TARGETS fakeX11 DESTINATION "lib")
