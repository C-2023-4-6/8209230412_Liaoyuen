#include<iostream>
using namespace std;
class Cuboid {
private:
	double length;
	double width;
	double height;
public:
	void inputDimensions() {
		cout << "�����볤�����ĳ������ߣ�" << endl;
		cin >> length >> width >> height;
	}
	double calculateVolume() {
		return length * width * height;
	}
	void outputVolume() {
		cout << "�����������Ϊ��" << calculateVolume() << endl;
	}
};
int main()
{
	Cuboid cuboid1, cuboid2, cuboid3;
	cuboid1.inputDimensions();
	cuboid2.inputDimensions();
	cuboid3.inputDimensions();
	cuboid1.outputVolume();
	cuboid2.outputVolume();
	cuboid3.outputVolume();
	return 0;
}