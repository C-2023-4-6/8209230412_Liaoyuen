#include<iostream>
using namespace std;
class Cuboid {
private:
	double length;
	double width;
	double height;
public:
	void inputDimensions() {
		cout << "请输入长方柱的长、宽、高：" << endl;
		cin >> length >> width >> height;
	}
	double calculateVolume() {
		return length * width * height;
	}
	void outputVolume() {
		cout << "长方柱的体积为：" << calculateVolume() << endl;
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