#include<iostream>
using namespace std;
class student
{
private:
	long no;
	int score;
public:
	student()
	{
		no = 0;
		score = 0;
	}
	void set()
	{
		long n;
		int s;
		cout << "������ѧ��ѧ�ţ� " << endl;
		cin >> n;
		cout << "������ѧ���ɼ���" << endl;
		cin >> s;
		no = n;
		score = s;
	}
	long getno()
	{
		return no;
	}
	int getscore()
	{
		return score;
	}
};
void max(student* p[])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = i;j<5;j++)
		{
			if (p[i]->getscore() < p[j]->getscore())
			{
				student* temp = p[i];
				p[i] = p[j];
				p[j] = temp;

			}
		}
	}
	cout << "�ɼ���ߵ�ѧ��Ϊ��" << p[0]->getno()<< endl;
}
int main()
{
	student s[5] = {};
	student* p[5];
	for (int i = 0; i < 5; i++)
	{
		s[i].set();
		p[i] = &s[i];
	}
	max(p);
	return 0;
}