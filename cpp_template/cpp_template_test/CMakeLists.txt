cmake_minimum_required (VERSION 3.2)
project(test)

find_package(Boost COMPONENTS program_options REQUIRED)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(test test.cpp)
target_link_libraries(test ${Boost_LIBRARIES})
