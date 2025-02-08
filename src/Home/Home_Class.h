#include "Cxx_Knowledge_Point_1.h"//包含知识点一头文件
#include <string>//包含字符串头文件
#include <iostream>//包含输入输出流头文件
using namespace std;////使用命名空间
struct StringNUM_Home//定义存主菜单的字符串
{
        string str_TEXT;//菜单的字符串
        string welcome;//欢迎的字符串
};
class  Home_Show//创建Home_Show类
{
    public://公有
        Home_Show(int Menu_NUM,bool Skip_Menu);
        /*
        1.构造函数
        2.初始化Menu_NUM变量来指定菜单数量
        3.初始化Skip_Menu变量来判断是否跳过菜单
        4.如果Skip_Menu为FALSE返回TRUE不跳过菜单，否则返回FALSE跳过菜单
        */
        ~Home_Show();
        //析构函数
        int Menu_SWitch();
        //菜单的判断
        void Home_Draw();
        //主界面的绘制
        void Menu_Draw_Cin();
        //菜单的打印与输入
        void Menu_Init();
        //菜单的初始化
        void Home_Init();
        //主界面的初始化
        int Menu_NUM=0;
        //菜单的数量
        int Judgment(Home_Show *menu);
        /*
        1.Home_Show *menu用来传入menu指针
        2.判断是否跳过菜单
        3.Skip_Menu为FALSE返回TRUE则不跳过菜单，否则返回FALSE则跳过菜单
        */

        // void Explain_Menu();//二级菜单
    private://私有
        int Menu_SWitch_Please_Select=0;
        //菜单输入的变量  
        StringNUM_Home STRTEXT[100];
        //定义了一个结构体变量数组STRTEXT
        bool Judgment_BOOL=true;
        //菜单状态的判断
        Cxx_Knowledge_Point_1 Cxx_Knowledge_Point_1;
        //定义了一个类变量Cxx_Knowledge_Point_1
        //需要包含Cxx_Knowledge_Point_1.h头文件
        bool Skip_Menu;
        /*
        1.定义了一个Skip_Menu布尔变量
        2.用判断是否跳过主菜单
        3.如果Skip_Menu为FALSE返回TRUE则不跳过菜单，否则返回FALSE则跳过菜单
        */

        //Home_Show::StringNUM Home_Show::STRTEXT[100];
    protected:
        int Menu_SWitch_NUM=0;
        /*
        1.定义了一个Menu_SWitch_NUM变量，默认为0
        2.如果Skip_Menu为FALSE不跳过菜单，否则跳过菜单进入Menu_SWitch_NUM子菜单
        3.且派生成员可以访问
        */
};