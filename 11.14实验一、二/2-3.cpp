#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b, c,l;
	cin >> a >> b >> c;
	l = a + b + c;
	if (a + b <= c || a + c <= b || b + c <= a)
		cout << "���ܹ���������" << endl;
	else
	{
		if (a == b || a == c || b == c)
			{
				cout << "�ǵ��������� �ܳ�Ϊ��" << l << endl;
			}
		else cout << "�ܳ�Ϊ��" << l << endl;
	}
}