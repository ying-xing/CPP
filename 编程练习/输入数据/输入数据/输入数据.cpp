#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <iostream>
using namespace std;
#include <stdio.h>

int main(void)
{
	int a = 0;
	cout << "请给整型变量a赋值" << endl;
	cin >> a;
	cout << "a=" << a << endl;

	double b = 0;
	cout << "请给double变量b赋值" << endl;
	cin >> b;
	cout << "b=" << b << endl;

	char ch = '\0';
	cout << "请给字符变量ch赋值" << endl;
	cin >> ch;
	cout << "ch=" << ch << endl;

	string str = "\0";
	cout << "请给字符串str赋值" << endl;
	cin >> str;
	cout << "str=" << str << endl;

	bool flag = true;
	cout << "请给布尔类型flag赋值" << endl;
	cin >> flag;
	cout << "bool=" << flag << endl;

	system("pause");

	return 0;
}