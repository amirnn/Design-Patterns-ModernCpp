project(DesignPatterns)
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})



# include headers
include_directories(include)
add_library(amirString STATIC src/String.cc)
target_link_libraries(amirString ${Boost_LIBRARIES})

add_executable(main src/main.cc)
target_link_libraries(main amirString)
