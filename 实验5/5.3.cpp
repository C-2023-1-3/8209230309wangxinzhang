#include<iostream>
using namespace std;
class zhuti
{
public:
	int length;
	int width;
	int height;
public:
	void set_a()
	{
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void show_a()
	{
		cout << "Ìå»ýÎª" << length * width * height << endl;
	}
};
int main()
{
	zhuti a1;
	a1.set_a();
	a1.show_a();
	zhuti a2;
	a2.set_a();
	a2.show_a();
	zhuti a3;
	a3.set_a();
	a3.show_a();

}