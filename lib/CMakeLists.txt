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
set(SRCS
		../src/calc.cpp
)

add_library(calcstatic STATIC ${SRCS})
add_library(calc SHARED ${SRCS})
#add_library(lib${PROJECT_NAME} SHARED ${SRCS})

#target_link_libraries(${PROJECT_NAME}
#		${GLIB-2.0_LDFLAGS}
#)

