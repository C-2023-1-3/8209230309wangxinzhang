#include<iostream>
using namespace std;
int main()
{
	double i, p = 0.8, sum = 0, d = 1, ep, m = 1;
	for (i = 2; i <= 100; i = i * 2)
	{
		sum = p * i + sum;
		ep = sum / m;
		m++;
	}
	cout << "ƽ��ÿ�컨" << ep << "Ԫ" << endl;
}