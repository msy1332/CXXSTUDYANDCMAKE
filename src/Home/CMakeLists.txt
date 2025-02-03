project(Home)#指定工程名

add_library(${PROJECT_NAME}
SHARED
Home_Class.cpp
)
#添加动态库

target_include_directories(Home
PUBLIC
${Cxx_Knowledge_Point_1_Dir}
)
#指定包含这个目录 

target_link_libraries(Home
PUBLIC
Cxx_Knowledge_Point_1
)