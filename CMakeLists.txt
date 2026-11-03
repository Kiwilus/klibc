cmake_minimum_required(VERSION 3.16)

project(klib
    VERSION 0.1.0
    LANGUAGES C
)

# C-Standard
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

file(GLOB_RECURSE KLIB_SOURCES CONFIGURE_DEPENDS
    "${PROJECT_SOURCE_DIR}/src/*.c"
)

add_library(klib SHARED
    ${KLIB_SOURCES}
)

set_target_properties(klib PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 0
)

target_include_directories(klib
    PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_compile_options(klib PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)

add_executable(klib_test
    tests/main.c
)

# link shared library
target_link_libraries(klib_test PRIVATE klib)

enable_testing()

add_test(NAME KLibTest COMMAND klib_test)

message(STATUS "Building klib ${PROJECT_VERSION}")
message(STATUS "Source files: ${KLIB_SOURCES}")
