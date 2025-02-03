#include <string>
#include <iostream>
using namespace std;
struct StringNUM
{
        string Menu;
};
class Cxx_Knowledge_Point_1
{
    public:
        Cxx_Knowledge_Point_1();//构造函数
        ~Cxx_Knowledge_Point_1();//析构函数
        void Secondary_menu_description();//二级菜单说明
        void Secondary_menu_description_Init();//二级菜单初始化
        int Secondary_menu_description_Switch();//二级菜单选择
    private:
        int Secondary_menu_description_Please_Select_Switch_NUM;//二级菜单选择
        int Secondary_menu_description_Menu_NUM=0;//二级菜单的数量
    protected:
};