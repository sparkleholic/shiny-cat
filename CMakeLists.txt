cmake_minimum_required(VERSION 2.8.7)
project(hello CXX)

if( NOT CMAKE_BUILD_TYPE )
	set(CMAKE_BUILD_TYPE Debug)
endif()

include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/inc)

set(GTEST_HEADERS
#${CMAKE_SOURCE_DIR}/gtest
	${CMAKE_SOURCE_DIR}
)
add_subdirectory(src)
add_subdirectory(lib)
add_subdirectory(test)

