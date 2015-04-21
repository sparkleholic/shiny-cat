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
#src/halo.cpp
		main.cpp
		calc.cpp
)

add_executable(${PROJECT_NAME} ${SRCS})

target_link_libraries(${PROJECT_NAME}
		${GLIB-2.0_LDFLAGS}
)

