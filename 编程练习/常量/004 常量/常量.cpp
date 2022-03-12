#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <iostream>
using namespace std;

#define DAY 7

int main(void)
{
	const int month = 12;

	cout << "一周有" << DAY << "天" << endl;
	cout << "一年有" << month << "月" << endl;

	system("pause");

	return 0;
}