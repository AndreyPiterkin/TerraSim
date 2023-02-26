cmake_minimum_required(VERSION 3.24)
project(TerraSim)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(include)
include_directories(shaders)
include_directories(src)
include_directories(thirdparty)

find_package(SDL2 REQUIRED)
include_directories(TerraSim ${SDL2_INCLUDE_DIRS})

add_executable(TerraSim
        include/Planet.h
        src/Planet.cpp src/Point3D.cpp include/Point3D.h src/main.cpp)

target_link_libraries(TerraSim ${SDL2_LIBRARIES})