cmake_minimum_required(VERSION  3.31.4)#cmake的版本
project(CMakeProgrammingCXX
    VERSION 0.0.1#项目的版本
    DESCRIPTION "CXXStudyEssyx"#项目说明
    HOMEPAGE_URL "https://github.com/msy1332/CMakeProgrammingStudyCXX"#项目地址
)

set(CMAKE_CXX_STANDARD 11)
#CMAKE_CXX_STANDARD指定C++版本

#变量设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
#CMAKE_RUNTIME_OUTPUT_DIRECTORY设置可执行文件生成目录
#PROJECT_BINARY_DIR根目录

set(Home_Dir ${CMAKE_SOURCE_DIR}/src/Home)
#设置变量，把${CMAKE_SOURCE_DIR}/src/Home目录设置成变量为Home_Dir
#CMAKE_SOURCE_DIR整个项目的根目录

#添加子目录
add_subdirectory(src)
#add_subdirectory添加子目录,会找src目录下的CMAKeListx

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#强制 CMake 使用 UTF-8 编码
