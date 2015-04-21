include_directories(${GTEST_HEADERS})

include(FindPkgConfig)

pkg_check_modules(GLIB-2.0 REQUIRED glib-2.0)
include_directories(${GLIB-2.0_INCLUDE_DIRS})

MESSAGE("CMAKE_SOURCE_DIR: " ${CMAKE_SOURCE_DIR})
MESSAGE("GLIB-2.0_INCLUDE_DIR: " ${GLIB-2.0_INCLUDE_DIRS})
MESSAGE("GLIB-2.0_LDFLAGS: " ${GLIB-2.0_LDFLAGS})

set(CMAKE_CXX_FLAGS
		${CMAKE_CXX_FLAGS}
		"-std=c++11"
)
set(TEST_SRCS
#		../src/calc.cpp
		gtest-all.cc
		test_main.cpp
		calc_test.cpp
)

add_executable(${PROJECT_NAME}-test ${TEST_SRCS})

target_link_libraries(${PROJECT_NAME}-test
		${GLIB-2.0_LDFLAGS}
		calc
#calcstatic
		pthread
)

