#include "Home_Class.h"
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
Home_Show::Home_Show(int Menu_NUM,bool Skip_Menu)//构造函数
{
    this->Menu_NUM=Menu_NUM;
    //将菜单的数量存入成员变量Menu_NUM
    this->Skip_Menu=Skip_Menu;
    //将用来判断是否跳过菜单的Bool变量存入成员变量Skip_Menu
}

Home_Show::~Home_Show()//析构函数
{

}

int Home_Show::Menu_SWitch()//菜单的判断
{
    switch(this->Menu_SWitch_Please_Select)
    {
        case 1:
            system("cls");
            Cxx_Knowledge_Point_1.Secondary_menu_description();
            //cout<<"1.C++ Variables, constants and data types";//c++变量，常量和数据类型
            //Judgment_BOOL=false;
            // cin.get();
            break;
        case 2:
            cout<<"2.C++ Expressions and operators";//c++表达式和操作符
            
            break;
        case 3:
            cout<<"3.C++ Flow control structure";//C++流控制结构
            
            break;
        case 4:
            cout<<"4.C++ Array and string";//C++数组与字符串
            
            break;
        case 5: 
            cout<<"5.C++ Pointer and address";//C++指针与地址
            
            break;
        case 6: 
            cout<<"6.C++ Introduction to function";//C++函数入门
            
            break;
        case 7:
            cout<<"7.C++ Advanced application of function";//C++函数的进阶应用
            
            break;
        case 8:
            cout<<"8.C++ Preprocessing instructions and macros";//C++预处理指令与宏
            
            break;
        case 9:
            cout<<"9.C++ Custom data types and applications";//C++自定义数据类型与应用
            
            break;
        case 10:
            cout<<"10.C++ Understanding object-oriented programming";//认识面向对象程序设计

            break;
        case 11:
            cout<<"11.C++ Advanced application of class";//C++类的进阶应用
            
            break;
        case 12:
            cout<<"12.C++ Operator overloading";//C++运算符重载
            
            break;
        default:
            //cout<<"Input error, please re-enter";//输入错误，请重新输入
            Status_Of_Menu=0;
            break;
    }
    if(Status_Of_Menu==1)//如果Judgment_BOOL为TRUE则返回TRUE正常输入
    {
        // return Normal_Exit;
        return 1;
    }
    else
    {   if(Menu_SWitch_Please_Select==Menu_NUM+1)//如果Menu_SWitch_Please_Select等于Menu_NUM+1也就是退出则返回-1
        {
            return -1;//返回-1
        }
        else
        {
            return 0;//否则返回FALSE输入错误
        }
    }
}

void Home_Show::Home_Draw()//绘制主界面
{
    /*
    cout<<"\t\t\t\t\t"<<"[Mski]Welcome"<<endl<<endl;
    cout<<"\t\t"<<"#           #    ######     #    #####     #####     #####     ###### "<<endl;
    cout<<"\t\t"<<" #         #    #      #    #   #     #   #     #   #  #  #   #      # "<<endl;
    cout<<"\t\t"<<"  #   #   #     ########    #   #         #     #   #  #  #   ########  "<<endl;
    cout<<"\t\t"<<"   # # # #      #           #   #     #   #     #   #  #  #   #  "<<endl;
    cout<<"\t\t"<<"    #   #        ######     #    #####     #####    #  #  #    ###### "<<endl;
    */
    cout<<"\t\t\t\t\t"<<STRTEXT[0].welcome<<endl;
    for(int i=1;i<=5;i++)
    {
        cout<<"\t\t"<<STRTEXT[i].welcome<<endl;
    }
}   



void Home_Show::Menu_Draw_Cin()//菜单的绘制与输入
{
    cout<<"\t\t"<<STRTEXT[0].str_TEXT<<endl;
    for(int i=3;i<=Menu_NUM+2;i++)
    {
        cout<<"\t"<<STRTEXT[i].str_TEXT<<endl;
    }
    cout<<"\t"<<Menu_NUM+1<<"."<<STRTEXT[2].str_TEXT<<endl;
    cout<<"\t"<<STRTEXT[1].str_TEXT<<"\b\b\b";
    cin>>Menu_SWitch_Please_Select;//输入Menu_SWitch_Please_Select
}

void Home_Show::Menu_Init()//菜单的初始化
{
    STRTEXT[0].str_TEXT="[Mski]StudyCxxAndEasyx";
    STRTEXT[1].str_TEXT="Please select[   ]";//输入选择
    STRTEXT[2].str_TEXT="exit";
    STRTEXT[3].str_TEXT="1.C++ Variables, constants and data types";//c++变量，常量和数据类型
    STRTEXT[4].str_TEXT="2.C++ Expressions and operators";//c++表达式和操作符
    STRTEXT[5].str_TEXT="3.C++ Flow control structure";//C++流控制结构
    STRTEXT[6].str_TEXT="4.C++ Array and string";//C++数组与字符串
    STRTEXT[7].str_TEXT="5.C++ Pointer and address";//C++指针与地址
    STRTEXT[8].str_TEXT="6.C++ Introduction to function";//C++函数入门
    STRTEXT[9].str_TEXT="7.C++ Advanced application of function";//C++函数的进阶应用
    STRTEXT[10].str_TEXT="8.C++ Preprocessing instructions and macros";//C++预处理指令与宏
    STRTEXT[11].str_TEXT="9.C++ Custom data types and applications";//C++自定义数据类型与应用
    STRTEXT[12].str_TEXT="10.C++ Understanding object-oriented programming";//认识面向对象程序设计
    STRTEXT[13].str_TEXT="11.C++ Advanced application of class";//C++类的进阶应用
    STRTEXT[14].str_TEXT="12.C++ Operator overloading";//C++运算符重载
}


int Home_Show::Judgment(Home_Show *menu)//判断是否跳过菜单
{
    if(menu->Skip_Menu==false)//判断Skip_Menu为FALSE返回TRUE不跳过菜单，否则返回FALSE跳过菜单
    {
        return true;//不跳过菜单
    }
    else
    {
        return false;//跳过菜单
    }
}


void Home_Show::Home_Init()//主界面的初始化
{
    STRTEXT[0].welcome="[Mski]Welcome";
    STRTEXT[1].welcome="#           #    ######     #    #####     #####     #####     ###### ";
    STRTEXT[2].welcome=" #         #    #      #    #   #     #   #     #   #  #  #   #      # ";
    STRTEXT[3].welcome="  #   #   #     ########    #   #         #     #   #  #  #   ########  ";
    STRTEXT[4].welcome="   # # # #      #           #   #     #   #     #   #  #  #   #  ";
    STRTEXT[5].welcome="    #   #        ######     #    #####     #####    #  #  #    ###### ";
}

// void Home_Show::Explain_Menu()//二级菜单说明
// {
    
// }