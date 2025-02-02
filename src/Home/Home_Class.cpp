#include "Home_Class.h"
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
Home_Show::Home_Show()//构造函数
{
    
}

Home_Show::~Home_Show()//析构函数
{
    
}

int Home_Show::Menu_SWitch()//菜单选择
{
    switch(this->Menu_SWitch_Please_Select)
    {
        case 1:
            cout<<"1.C++ Variables, constants and data types";//c++变量，常量和数据类型
            goto Enter_correctly;
            break;
        case 2:
            cout<<"2.C++ Expressions and operators";//c++表达式和操作符
            goto Enter_correctly;
            break;
        case 3:
            cout<<"3.C++ Flow control structure";//C++流控制结构
            goto Enter_correctly;
            break;
        case 4:
            cout<<"4.C++ Array and string";//C++数组与字符串
            goto Enter_correctly;
            break;
        case 5: 
            cout<<"5.C++ Pointer and address";//C++指针与地址
            goto Enter_correctly;
            break;
        case 6: 
            cout<<"6.C++ Introduction to function";//C++函数入门
            goto Enter_correctly;
            break;
        case 7:
            cout<<"7.C++ Advanced application of function";//C++函数的进阶应用
            goto Enter_correctly;
            break;
        case 8:
            cout<<"8.C++ Preprocessing instructions and macros";//C++预处理指令与宏
            goto Enter_correctly;
            break;
        case 9:
            cout<<"9.C++ Custom data types and applications";//C++自定义数据类型与应用
            goto Enter_correctly;
            break;
        case 10:
            cout<<"10.C++ Understanding object-oriented programming";//认识面向对象程序设计
            goto Enter_correctly;
            break;
        case 11:
            cout<<"11.C++ Advanced application of class";//C++类的进阶应用
            goto Enter_correctly;
            break;
        case 12:
            cout<<"12.C++ Operator overloading";//C++运算符重载
            goto Enter_correctly;
            break;
        default:
            cout<<"Input error, please re-enter";//输入错误，请重新输入
            goto Input_error;
    }
    Enter_correctly:
    return 1;
    Input_error:
    return 0;
}

void Home_Show::Home_Draw()//绘制主界面
{
    cout<<"\t\t\t\t\t"<<"[Mski]Welcome"<<endl<<endl;
    cout<<"\t\t"<<"#           #    ######     #    #####     #####     #####     ###### "<<endl;
    cout<<"\t\t"<<" #         #    #      #    #   #     #   #     #   #  #  #   #      # "<<endl;
    cout<<"\t\t"<<"  #   #   #     ########    #   #         #     #   #  #  #   ########  "<<endl;
    cout<<"\t\t"<<"   # # # #      #           #   #     #   #     #   #  #  #   #  "<<endl;
    cout<<"\t\t"<<"    #   #        ######     #    #####     #####    #  #  #    ###### "<<endl;
}   

void Home_Show::Explain_Menu()//二级菜单说明
{
    
}

void Home_Show::Menu_Draw_Cin()//菜单的绘制与输入
{
    cout<<"\t\t"<<STRTEXT[0].str_TEXT<<endl;
    for(int i=2;i<=Menu_NUM+1;i++)
    {
        cout<<"\t"<<STRTEXT[i].str_TEXT<<endl;
    }
    cout<<"\t"<<STRTEXT[1].str_TEXT<<"\b\b\b";
    cin>>Menu_SWitch_Please_Select;//输入Menu_SWitch_Please_Select
}

void Home_Show::Menu_Init()//菜单的初始化
{
    STRTEXT[0].str_TEXT="[Mski]StudyCxxAndEasyx";
    STRTEXT[1].str_TEXT="Please select[   ]";//输入选择
    STRTEXT[2].str_TEXT="1.C++ Variables, constants and data types";//c++变量，常量和数据类型
    STRTEXT[3].str_TEXT="2.C++ Expressions and operators";//c++表达式和操作符
    STRTEXT[4].str_TEXT="3.C++ Flow control structure";//C++流控制结构
    STRTEXT[5].str_TEXT="4.C++ Array and string";//C++数组与字符串
    STRTEXT[6].str_TEXT="5.C++ Pointer and address";//C++指针与地址
    STRTEXT[7].str_TEXT="6.C++ Introduction to function";//C++函数入门
    STRTEXT[8].str_TEXT="7.C++ Advanced application of function";//C++函数的进阶应用
    STRTEXT[9].str_TEXT="8.C++ Preprocessing instructions and macros";//C++预处理指令与宏
    STRTEXT[10].str_TEXT="9.C++ Custom data types and applications";//C++自定义数据类型与应用
    STRTEXT[11].str_TEXT="10.C++ Understanding object-oriented programming";//认识面向对象程序设计
    STRTEXT[12].str_TEXT="11.C++ Advanced application of class";//C++类的进阶应用
    STRTEXT[13].str_TEXT="12.C++ Operator overloading";//C++运算符重载
}


int Judgment(Home_Show *menu)//判断是否跳过菜单
{
    if(menu->Menu_SWitch_NUM==0)//判断是Menu_SWitch_NUM是否为空，如果为空就跳过菜单，否则不跳过菜单
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void Home_Show::Home_Init()//主界面的初始化
{
    STRTEXT[0].welcome="";
}
