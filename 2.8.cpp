#include<iostream>
using namespace std;
int main()
{
	double a, xn=4,xn1;
	cin >> a;
	if (a < 0)
		cout << "����û��ƽ����" << endl;
	else if (a == 0)
		cout << "ƽ����Ϊ0" << endl;
	else
	{
		do { xn1 = (xn + a / xn) / 2; 
		xn = xn1;
		xn1 = (xn + a / xn) / 2;
		} while (fabs(xn - xn1) >= 0.00001);
		
		
		cout << "ƽ����Ϊ��" << xn1 << endl;
	}
}