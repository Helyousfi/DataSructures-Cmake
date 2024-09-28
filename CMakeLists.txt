# Minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(DataStructuresProject VERSION 1.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories for header files
include_directories(include)

# Options to choose between Static or Dynamic library and Executable configuration
option(BUILD_STATIC_LIB "Build static library" ON)
option(BUILD_SHARED_LIB "Build shared (dynamic) library" OFF)
option(BUILD_EXECUTABLE "Build executable including all sources" OFF)

# Add all source files to a variable for easy management
set(SOURCE_FILES
    src/Array.cpp
    src/LinkedList.cpp
    src/Stack.cpp
    src/Queue.cpp   
)

# Create static library if option is enabled
if(BUILD_STATIC_LIB)
    add_library(DataStructuresStatic STATIC ${SOURCE_FILES})
    message(STATUS "Static library will be built: libDataStructuresStatic.a")
endif()

# Create dynamic (shared) library if option is enabled
if(BUILD_SHARED_LIB)
    add_library(DataStructuresDynamic SHARED ${SOURCE_FILES})
    message(STATUS "Shared library will be built: libDataStructuresDynamic.so")
endif()

# Main executable that links against the chosen library or includes all source files directly
if(BUILD_EXECUTABLE)
    add_executable(DataStructuresExecutable src/main.cpp ${SOURCE_FILES})
    message(STATUS "Executable with all source files will be built.")
else()
    add_executable(DataStructuresExecutable src/main.cpp)

    # Link the executable to the static library if built
    if(TARGET DataStructuresStatic)
        target_link_libraries(DataStructuresExecutable PRIVATE DataStructuresStatic)
        message(STATUS "Executable will link against Static library.")
    endif()

    # Link the executable to the shared library if built
    if(TARGET DataStructuresDynamic)
        target_link_libraries(DataStructuresExecutable PRIVATE DataStructuresDynamic)
        message(STATUS "Executable will link against Dynamic library.")
    endif()
endif()

# Optional test target to verify linking
enable_testing()
add_test(NAME BasicTest COMMAND DataStructuresExecutable)

