cmake_minimum_required(VERSION 2.8.9)
project(pcolas)

include_directories(include)

set(SOURCES src/main.cpp src/pcolas.cpp )

add_executable(proyecto ${SOURCES})
