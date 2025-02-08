#include <iostream>
#include <windows.h>
#include "Home_Class.h"
using namespace std;
int main()
{
    //system("mode con: cols=800 lines=800");
    Home_Show *show= new Home_Show(12,FALSE);//设置菜单的显示数量
    show->Menu_Init();//菜单的初始化
    show->Home_Init();//主界面的初始化
    show->Home_Draw();//画主界面    
    // cin.get();//按任意键继续
    system("pause");//按任意键继续
    system("cls");//清屏
    while(1)//主循环
    {
        if(show->Judgment(show)==TRUE)//判断是否跳过菜单
        {
            // Input_error://请重新输入
            show->Menu_Draw_Cin();//菜单的输入与绘制
            show->Menu_SWitch();//菜单的选择
            if(show->Menu_SWitch()==0||show->Menu_SWitch()==1)//输入错误或正常退出
            {
                system("cls");
                continue;
                // show->Menu_Draw_Cin();//菜单的输入与绘制
                // show->Menu_SWitch();//菜单的选择
                // goto Input_error;//输入错误，请重新输入
            }
            else
            {
                // goto Return;
                break;
            }
        }
        else
        {
            
        }
    }
    // Return:
    delete show;
    system("pause");
    return 0;
}