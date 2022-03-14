#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <iostream>
using namespace std;

#include "swap.h"

int main(void)
{
	int a = 11;
	int b = 12;

	Swap(a, b);
	cout << "a=" << a << " b=" << b << endl;

	system("pause");
	return 0;
}