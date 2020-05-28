cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(algorithms)

set(SOURCES src/algo.cpp)
set(INCLUDES_DIR include)

add_library(algo SHARED ${SOURCES})
target_include_directories(algo PUBLIC ${INCLUDES_DIR})
