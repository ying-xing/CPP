#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <iostream>
using namespace std;

int main(void)
{
	bool flag = true;

	cout << flag << endl;

	flag = false;

	cout << flag << endl;

	cout << sizeof(flag) << endl;

	flag = 2;
	cout << flag << endl;
	flag = 0;
	cout << flag << endl;
	flag = -9;
	cout << flag << endl;


	system("pause");

	return 0;
}