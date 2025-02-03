#include "Cxx_Knowledge_Point_1.h"
#include <string>
#include <iostream>
using namespace std;
struct StringNUM
{
        string str_TEXT;
        string welcome;
};
class  Home_Show
{
    public:
        Home_Show(int Menu_NUM);//构造函数
        ~Home_Show();//析构函数
        int Menu_SWitch();//菜单的选择
        void Home_Draw();//主界面的绘制
        void Explain_Menu();//二级菜单
        void Menu_Draw_Cin();//菜单的打印
        void Menu_Init();//菜单的初始化
        void Home_Init();//主界面的初始化
        int Menu_NUM=0;//菜单的数量
        int Judgment(Home_Show *menu);//判断是否跳过菜单
    private:
        int Menu_SWitch_Please_Select=0;
        Cxx_Knowledge_Point_1 Cxx_Knowledge_Point_1;
        StringNUM STRTEXT[100];
        //Home_Show::StringNUM Home_Show::STRTEXT[100];
    protected:
        int Menu_SWitch_NUM=0;//可以跳过菜单
};