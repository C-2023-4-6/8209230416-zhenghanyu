#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b, sum;
	char f;
	cin >> a >> f >> b;
	switch(f)
	{
		case'+': sum = a + b; break;
		case'-': sum = a - b; break;
		case'*': sum = a * b; break;
		case'/': 
		{
			if (b != 0) sum = a / b;
			else cout << "������" << endl;
		}break;
		case'%': sum = int(a) % int(b); break;
		default: cout << "������" << endl;
	}
	cout << sum << endl;
}