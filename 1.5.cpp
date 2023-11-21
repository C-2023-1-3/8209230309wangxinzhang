#include<iostream>
using namespace std;
int main() {
	float f = 0;
	float c = 0;
	cout << "请输入华氏温度："<<endl;
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << "转变为摄氏温度为；" << c << endl;
	return 0;

}