#include "Cxx_Knowledge_Point_1.h"
#include <windows.h>
void Cxx_Knowledge_Point_1::Secondary_menu_description()//二级菜单说明
{
    //cout<<"\t\tC++ Variables, constants and data types";
    Secondary_menu_description_Init();
    Secondary_menu_description_Menu_NUM=1;
    //Input_error:
    Secondary_menu_description_Draw();
    while(1)
    {
        int The_selection_and_judgment_of_the_secondary_menu_return=The_selection_and_judgment_of_the_secondary_menu();
        if(The_selection_and_judgment_of_the_secondary_menu_return==0||The_selection_and_judgment_of_the_secondary_menu_return==1)
        {
            system("cls");
            Secondary_menu_description_Draw();
        }
        else
        {
            break;
        }
    }
    // The_selection_and_judgment_of_the_secondary_menu();
    // if(The_selection_and_judgment_of_the_secondary_menu()==0)
    // {
        
    //     goto Input_error;//输入错误
    // }
    // else if(The_selection_and_judgment_of_the_secondary_menu()==1)//输入正确
    // {
    //     while(1)
    //     {
    //         //The_selection_and_judgment_of_the_secondary_menu();
    //         if(The_selection_and_judgment_of_the_secondary_menu()==0)
    //         {
    //             goto Input_error;
    //         }
    //     }
    // }
    // else //if(The_selection_and_judgment_of_the_secondary_menu()==-1)
    // {
    //     goto exit;
    // }
    // exit:
}

void Cxx_Knowledge_Point_1::Secondary_menu_description_Init()//二级菜单初始化
{
    StringMenuText[0].MenuText="[Mski]C++ Variables, constants and data types";
    StringMenuText[1].MenuText="Please select[   ]";//输入选择
    StringMenuText[2].MenuText="exit";//退出主菜单
    StringMenuText[3].MenuText="1.C++ Variables";//c++变量，常量和数据类型

    //StringMenuText[3].MenuText="2.C++ Expressions and operators";//c++表达式和操作符
    //StringMenuText[4].MenuText="3.C++ Flow control structure";//C++流控制结构
    //StringMenuText[5].MenuText="4.C++ Array and string";//C++数组与字符串
    //StringMenuText[6].MenuText="5.C++ Pointer and address";//C++指针与地址
    //StringMenuText[7].MenuText="6.C++ Introduction to function";//C++函数入门
    //StringMenuText[8].MenuText="7.C++ Advanced application of function";//C++函数的进阶应用
    //StringMenuText[9].MenuText="8.C++ Preprocessing instructions and macros";//C++预处理指令与宏
    //StringMenuText[10].MenuText="9.C++ Custom data types and applications";//C++自定义数据类型与应用
    //StringMenuText[11].MenuText="10.C++ Understanding object-oriented programming";//认识面向对象程序设计
    //StringMenuText[12].MenuText="11.C++ Advanced application of class";//C++类的进阶应用
    //StringMenuText[13].MenuText="12.C++ Operator overloading";//C++运算符重载
}


Cxx_Knowledge_Point_1::Cxx_Knowledge_Point_1()
{

}
Cxx_Knowledge_Point_1::~Cxx_Knowledge_Point_1()
{
    
}
void Cxx_Knowledge_Point_1::Secondary_menu_description_Draw()
{
    cout<<"\t\t"<<StringMenuText[0].MenuText<<endl;
    for(int i=3;i<=Secondary_menu_description_Menu_NUM+2;i++)
    {
        cout<<"\t"<<StringMenuText[i].MenuText<<endl;
    }
    cout<<"\t"<<Secondary_menu_description_Menu_NUM+1<<"."<<StringMenuText[2].MenuText<<endl;
    cout<<"\t"<<StringMenuText[1].MenuText<<"\b\b\b";
    cin>>Secondary_menu_description_Please_Select_Switch_NUM;//输入Menu_SWitch_Please_Select
}

int Cxx_Knowledge_Point_1::The_selection_and_judgment_of_the_secondary_menu()
{
    //Secondary_menu_description_Menu_Exit=this->Secondary_menu_description_Menu_NUM+1;
    switch(Secondary_menu_description_Please_Select_Switch_NUM)
    {
        case 1:
            system("cls");
            //cout<<"1.C++ Variables";//c++变量
            /*
            while(1)
            {
                //Variables();
                if(Variables()==0)
                {
                    Judgment_BOOL=false;
                    break;
                }
            }*/
            Variables();
            //cin.get();
            if(cin.get())
            {
                //Judgment_BOOL=false;
                break;
            }
            //
        // case 2:
        //     return -1;
        default:
            cout<<"Input error, please re-enter";//输入错误，请重新输入
            Judgment_BOOL=false;
            break;
    }
    if(Judgment_BOOL)
    {
        return 1;
    }
    else
    {   if(Secondary_menu_description_Please_Select_Switch_NUM==Secondary_menu_description_Menu_NUM+1)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
}

int Cxx_Knowledge_Point_1::Variables()
{
    /*
    #include <iostream>//输入输出流头文件
    using namespace std;//使用命名空间
    int main()//主函数
    {
        return 0;//结束程序
    }
    */
    int num=1;//int整型,创建了个int类型的变量num
    float num1=1.3;//float单精度浮点型,创建了个float类型的变量num1
    double num2=1.3;//double双精度浮点型,创建了个double类型的变量num2
    char num3='C';//char字符型,创建了个char类型的变量num3
    cout<<"num:"<<num<<endl;//C++的输出函数
    cout<<"num:"<<num1<<endl;//C++的输出函数
    cout<<"num:"<<num2<<endl;//C++的输出函数
    cout<<"num:"<<num3<<endl;//C++的输出函数
    return 0;
}