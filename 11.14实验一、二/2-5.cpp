#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char p;
	int a=0, b=0, c=0,d=0;
	while ((p = getchar()) != '\n')
	{
		if ((p >= 'a' && p <= 'z') || (p >= 'A' && p <= 'Z')) a++;
		else if (p == ' ') b++;
		else if (p >= '0' && p <= '9') c++;
		else d++;
	}
	cout <<"Ӣ����ĸ����Ϊ��"<< a << endl <<"�ո�����Ϊ��"<< b << endl<<"�����ַ�����Ϊ��" << c << endl <<"�����ַ�����Ϊ��" << d << endl;
	return 0;
}