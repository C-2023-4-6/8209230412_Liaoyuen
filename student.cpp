#include<iostream>
#include<string>
#include"student.h"  //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int n, string nm, char s)
{
    num = n;
    name = nm;
    sex = s;
}