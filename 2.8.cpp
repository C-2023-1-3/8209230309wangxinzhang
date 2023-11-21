#include<iostream>
using namespace std;
int main()
{
	double a, xn=4,xn1;
	cin >> a;
	if (a < 0)
		cout << "负数没有平方根" << endl;
	else if (a == 0)
		cout << "平方根为0" << endl;
	else
	{
		do { xn1 = (xn + a / xn) / 2; 
		xn = xn1;
		xn1 = (xn + a / xn) / 2;
		} while (fabs(xn - xn1) >= 0.00001);
		
		
		cout << "平方根为：" << xn1 << endl;
	}
}