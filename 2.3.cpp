#include<iostream>
using namespace std;
int main() {
	int a, b, c, s;
	cin >> a >> b >> c;
	if (a + b > c &&a + c > b && b + c > a)
	{
		cout << "���Թ���������" << endl;
		s = a + b + c;
		cout << "�������ܳ�=" << s << endl;
		if(a==b||a==c||b==c)
		{
			cout << "���������ǵ���������" << endl;
		}
		else { cout << "�������β��ǵ���������" << endl; }
	}
	else 
	{
		cout << "�����Թ���������" << endl;
	}
}