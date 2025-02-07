#include <string>
#include <iostream>
using namespace std;
struct StringNUM
{
        string MenuText;
};
class Cxx_Knowledge_Point_1
{
    public:
        Cxx_Knowledge_Point_1();//构造函数
        ~Cxx_Knowledge_Point_1();//析构函数
        void Secondary_menu_description();//二级菜单说明
        void Secondary_menu_description_Init();//二级菜单初始化
        void Secondary_menu_description_Draw();//二级菜单绘制
        int The_selection_and_judgment_of_the_secondary_menu();//二级菜单的选择与判断
    private:
        StringNUM StringMenuText[10];//菜单的字符串
        bool Judgment_BOOL=true;
        int Secondary_menu_description_Please_Select_Switch_NUM;//二级菜单选择
        int Secondary_menu_description_Menu_NUM;//二级菜单的数量
        int Variables();
    protected:
};