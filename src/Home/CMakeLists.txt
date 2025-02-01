project(Home)#指定工程名

add_library(${PROJECT_NAME}
SHARED
Home_Class.cpp
)
#添加动态库