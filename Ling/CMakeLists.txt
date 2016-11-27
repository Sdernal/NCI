cmake_minimum_required(VERSION 3.3)
project(Ling)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Ling ${SOURCE_FILES})

link_directories(
		/usr/include/
)
target_link_libraries(Ling freeling)