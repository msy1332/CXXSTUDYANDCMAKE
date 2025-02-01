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
            return 0;
            break;
        case 2:
            return 0;
            break;
        case 3:
            return 0;
            break;
        case 4:
            return 0;
            break;
        case 5:
            return 0;
            break;
        case 6: 
            return 0;
            break;
        case 7:
            return 0;
            break;
        case 8:
            return 0;
            break;
        case 9:
            return 0;
            break;
        case 10:
            return 0;
            break;
        case 11:
            return 0;
            break;
        default:
            return 0;
    }
}

void Home_Show::Home_Draw()//绘制主界面
{
    cout<<"\t\t"<<"[Mski]Welcome"<<endl<<endl;
    cout<<"\t\t"<<"▇            ▇       ▇▇▇▇ "<<endl<<endl;
    cout<<"\t\t"<<" ▇          ▇      ▇      ▇  ▇ "<<endl<<endl;
    cout<<"\t\t"<<"  ▇   ▇   ▇       ▇▇▇▇▇  ▇ "<<endl<<endl;
    cout<<"\t\t"<<"   ▇ ▇▇ ▇        ▇           ▇ "<<endl<<endl;
    cout<<"\t\t"<<"    ▇    ▇           ▇▇▇▇    ▇  "<<endl<<endl;
    /*
    int i=0;
    char ch=getchar();
    while(ch!='\r')
    {
        while(i<1)
        {
            cin>>Menu_SWitch_Please_Select;
            i++;
        }
    }
    */
}   

void Home_Show::Explain_Menu()//二级菜单说明
{
    
}

void Home_Show::Menu_Draw_Cin()
{
    cout<<"\t\t"<<STRTEXT[0].str_TEXT<<endl;
    for(int i=2;i<=Menu_NUM;i++)
    {
        cout<<"\t"<<STRTEXT[i].str_TEXT<<endl;
    }
    cout<<"\t"<<STRTEXT[1].str_TEXT<<"\b\b\b";
    cin>>Menu_SWitch_Please_Select;//输入Menu_SWitch_Please_Select
}

void Home_Show::Menu_Init()
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


int Judgment(Home_Show *menu)
{
    if(menu->Menu_SWitch_NUM==0)//判断是否有Menu_SWitch_NUM输入
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void Home_Show::Home_Init()
{
    STRTEXT[0].welcome="";
}
