# Version de cmake minimum
cmake_minimum_required (VERSION 3.0)
message(STATUS "Version de CMake minimum 3.0")

# Release/Debug
set(CMAKE_BUILD_TYPE Release)
message(STATUS "Type de compilation: ${CMAKE_BUILD_TYPE}")

# Nom du projet
project (BaseType VERSION 0.0.0.4)
message(STATUS "Nom du projet: ${CMAKE_PROJECT_NAME}")

add_subdirectory(version-config)

add_subdirectory(include)

add_subdirectory(src)

add_subdirectory(pkg-config)

add_subdirectory(tests)

enable_testing()
add_test(NAME test_BaseType
	COMMAND test_BaseType
)

add_subdirectory(doc)

add_subdirectory(examples)

