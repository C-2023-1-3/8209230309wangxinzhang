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
	cout << "字母的个数x为：" << x << endl;
	cout << "数字的个数y为:" << y << endl;
	cout << "空格的个数z为：" << z << endl;
	cout <<" 其他字符的个数p为 :"<< p << endl;
}