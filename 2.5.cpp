#include<iostream>
using namespace std;
int main()
{
	char c;
	int x=0, y=0, z=0, p=0;
	while ((c = getchar())!='\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') { x++; }
		else if (c >= '0'&&c<='9') { y++; }
		else if (c == ' ') { z++; }
		else { p++; }

	}
	cout << "��ĸ�ĸ���xΪ��" << x << endl;
	cout << "���ֵĸ���yΪ:" << y << endl;
	cout << "�ո�ĸ���zΪ��" << z << endl;
	cout <<" �����ַ��ĸ���pΪ :"<< p << endl;
}