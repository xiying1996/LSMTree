cmake_minimum_required(VERSION 3.10)

project(LSMTree)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 11)

# 设置源文件
set(SOURCES
    src/main.cpp
    src/Memtable.cpp
    src/SSTable.cpp
    src/LSMTree.cpp
)

# 设置头文件
set(HEADERS
    include/Memtable.h
    include/SSTable.h
    include/LSMTree.h
)

# 包含头文件目录
include_directories(include)

# 定义可执行文件
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
