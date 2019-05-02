cmake_minimum_required (VERSION 3.2)
project(main)

find_package(Boost COMPONENTS program_options REQUIRED)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(main main.cpp)
target_link_libraries(main ${Boost_LIBRARIES})
