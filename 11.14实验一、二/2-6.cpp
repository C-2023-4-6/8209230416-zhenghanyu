#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a, b, m, n;
	cin >> a >> b;
	int c = max(a, b);
	int d = min(a, b);
	while (c % a != 0 || c % b != 0) c++;
	while (a % d != 0 || b % d != 0) d--;
	cout << "���Լ��Ϊ��" << d << endl << "��С������Ϊ��" << c << endl;
	return 0;

}