project(HomeMain)#指定工程名

#添加子目录
add_subdirectory(Home)
#add_subdirectory添加子目录,会找Home目录下的CMAKeListx

add_executable(CxxStudy HomeMain.cpp)
#添加可执行文件

target_include_directories(CxxStudy
PUBLIC
${Home_Dir}
)
#指定包含这个目录 

target_link_libraries(CxxStudy
PUBLIC
Home
)
#链接动态库