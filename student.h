#pragma once
#include<iostream>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int n, string nm, char s);
private:
	int num;
	string name;
	char sex;
};

