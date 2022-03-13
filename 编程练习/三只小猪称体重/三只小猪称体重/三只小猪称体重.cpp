#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <iostream>
using namespace std;

int main(void)
{
	int weight1 = 0;
	int weight2 = 0;
	int weight3 = 0;

	cout << "输入小猪A体重" << endl;
	cin >> weight1;

	cout << "输入小猪B体重" << endl;
	cin >> weight2;

	cout << "输入小猪C体重" << endl;
	cin >> weight3;

	if (weight1 > weight2)
	{
		if (weight1 > weight3)
		{
			cout << "小猪A最重" << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
		}
	}
	else
	{
		if (weight2 > weight3)
		{
			cout << "小猪B最重" << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
		}
	}

	system("pause");

	return 0;
}