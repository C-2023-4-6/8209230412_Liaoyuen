#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(){
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << "����ֵ����" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p1;
	cout << "��ʼ����ֵ��" << endl;
	p1.display();
	p1.setPoint(1, 2);
	cout << "�޸ĺ������ֵΪ��" << endl;
	p1.display();
	return 0;
}