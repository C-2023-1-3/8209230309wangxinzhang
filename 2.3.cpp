#include<iostream>
using namespace std;
int main() {
	int a, b, c, s;
	cin >> a >> b >> c;
	if (a + b > c &&a + c > b && b + c > a)
	{
		cout << "可以构成三角形" << endl;
		s = a + b + c;
		cout << "三角形周长=" << s << endl;
		if(a==b||a==c||b==c)
		{
			cout << "该三角形是等腰三角形" << endl;
		}
		else { cout << "该三角形不是等腰三角形" << endl; }
	}
	else 
	{
		cout << "不可以构成三角形" << endl;
	}
}