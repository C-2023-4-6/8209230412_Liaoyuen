#include<iostream>
#include<string>
#include"student.h"  //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int n, string nm, char s)
{
    num = n;
    name = nm;
    sex = s;
}