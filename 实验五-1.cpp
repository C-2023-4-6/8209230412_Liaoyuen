#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	void inputTime() {
		cin >> hour;      //�����趨��ʱ�� 
		cin >> minute;
		cin >> sec;
	}
	void outputTime(){
		cout << hour<< ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.inputTime();
	t1.outputTime();
	return 0;
}
