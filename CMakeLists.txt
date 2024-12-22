# 设置CMake的最低版本要求
cmake_minimum_required(VERSION 3.10)
 
# 设置项目名称和版本（可选）
project(test VERSION 1.0)
 
# 指定C++标准（可选，但推荐）
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加第三方库的包含目录
include_directories(${PROJECT_SOURCE_DIR}/third_party)

# 添加项目的包含目录
include_directories(${PROJECT_SOURCE_DIR}/inc)

# 添加可执行文件
add_executable(test src/main.cpp src/func.cpp)