#include<iostream>
using namespace std;
class cfz
{
public:
	double length, width, height;
	cfz()
	{
		length = 0;
		width = 0;
		height = 0;
	}
	void setv()
	{
		double l,  w, h;
		cout << "�����볤����ĳ����:"<<endl;
		cin>> l >> w >> h;
		length = l;
		width = w;
		height = h;
	}
	double v()
	{
		double v=0;
		v = length * width * height;
		cout << "����������Ϊ�� " << v << endl;
		return v;
	}
};
int main()
{
	cfz c;
	for (int i = 0; i < 3; i++)
	{
		c.setv();
		c.v();
	}
	return 0;
}