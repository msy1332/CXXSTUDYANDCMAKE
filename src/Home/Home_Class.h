
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
        Home_Show();//构造函数
        ~Home_Show();//析构函数
        int Menu_SWitch();//菜单的选择
        void Home_Draw();//主界面的绘制
        void Explain_Menu();//二级菜单
        void Menu_Draw_Cin();//菜单的打印
        void Menu_Init();//菜单的初始化
        void Home_Init();//主界面的初始化
        int Menu_NUM=0;//菜单的选择
    private:
        bool Home_BOOL=0;
        int Menu_SWitch_Please_Select=0;
        StringNUM STRTEXT[100];
        //Home_Show::StringNUM Home_Show::STRTEXT[100];
    protected:
        friend int Judgment(Home_Show *menu);
        int Menu_SWitch_NUM=0;
};