#include<iostream>
using namespace std;
class Point
{
public:
	Point()
	{
		int x = 60, y = 80;
	}
private:
	int x;
	int y;
public:
	void setPoint(int i,int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << "�޸ĺ�����꣺" << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	cout << "����ı���i,j" << endl;
	int i, j;
	cin >> i;
	cin >> j;
	Point p1;
	p1.setPoint(i,j);
	p1.display();
	return 0;
}