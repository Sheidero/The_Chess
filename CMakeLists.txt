cmake_minimum_required(VERSION 3.14)
project(The_Chess)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(The_Chess ${SOURCE_FILES})
include_directories(/ext/SFML/include/)
include_directories(/res/images/)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(The_Chess sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
