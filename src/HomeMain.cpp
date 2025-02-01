#include <iostream>
#include <windows.h>
#include "Home_Class.h"
using namespace std;
int main()
{
    //system("mode con: cols=800 lines=800");
    Home_Show *show= new Home_Show;
    show->Home_Draw();//画主界面
    cin.get();//按任意键继续
    system("cls");//清屏
    show->Menu_Init();
    show->Menu_NUM=12;
    while(1)//主循环
    {
        if(Judgment(show)==1)
        {
            show->Menu_Draw_Cin();//菜单的输入与绘制
            show->Menu_SWitch();//菜单的选择
            if(show->Menu_SWitch()==0)
            {
                system("cls");
                continue;
            }
            return 0;
        }
        else
        {
            
        }
    }
    delete show;
    system("pause");
    return 0;
}