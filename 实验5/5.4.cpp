#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	Student(){}
	string id;
	int score;
};
void max(Student* p)
{
	Student *t;
	Student* s;
	double max;
	for (t = p, s = t, max = t->score; t < (p + 5); t++)
	{
		if (t->score > max)
		{
			max = t->score;
			s = t;
		}
	}
	cout << "�����"<<s->id << " " << max << endl;
}
int main()
{
	Student s[5];
	cout << "������ѧ�ųɼ�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> s[i].id;
		cin >> s[i].score;
	}
	max(s);

}