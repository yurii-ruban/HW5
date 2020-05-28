cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(testApp)

set(SOURCES main.cpp)
set(INCLUDES_DIR include)
add_subdirectory(lib)

add_executable(testapp ${SOURCES})
target_include_directories(testapp PUBLIC ${INCLUDES_DIR})
target_link_libraries(testapp algo)
