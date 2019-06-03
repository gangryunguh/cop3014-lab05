cmake_minimum_required(VERSION 3.08)
project(cop3014_lab05)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES billfile.cpp dowhile.cpp for.cpp nested.cpp sentinel.cpp while.cpp
        c++-for-loops-a.cpp c++-for-loops-b.cpp)

add_executable(billfile.exe billfile.cpp)
add_executable(dowhile.exe dowhile.cpp)
add_executable(for.exe for.cpp)
add_executable(nested.exe nested.cpp)
add_executable(sentinel.exe sentinel.cpp)
add_executable(while.exe while.cpp)
add_executable(c++for-loops-a.exe c++for-loops-a.cpp)
add_executable(c++for-loops-b.exe c++for-loops-b.cpp)




