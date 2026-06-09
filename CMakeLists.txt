cmake_minimum_required(VERSION 4.2)

project(Hellcat
        VERSION 1.0
        DESCRIPTION "SIMD Maths. library(Prototype)"
        LANGUAGES CXX
        )

add_library(hellcat)

# Add source files here
target_sources(hellcat
              PRIVATE
               src/vec3.cpp
               src/vec4.cpp
               src/mat4x4.cpp
            
              PUBLIC
                FILE_SET HEADERS
                BASE_DIRS
                    include
                FILES
                    include/vec3.hpp
                    include/vec4.hpp
                    include/mat4x4.hpp
              )

# We need C++23 for compiling this lib
target_compile_features(hellcat PRIVATE cxx_std_23)
# Enable Multiprocessor compilation for MSVC only and AVX2 , FMA for all
target_compile_options(hellcat PRIVATE
    $<$<CXX_COMPILER_ID:MSVC>:/MP>
    $<$<CXX_COMPILER_ID:MSVC>:/arch:AVX2>
    $<$<CXX_COMPILER_ID:GNU>:-mavx2 -mfma>
    $<$<CXX_COMPILER_ID:Clang>:-mavx2 -mfma>
)