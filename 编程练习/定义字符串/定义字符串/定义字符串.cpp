#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <iostream>
using namespace std;

#include <string>

int main(void)
{
	char str1[] = "hello";
	string str2 = "你好";

	cout << str1 << endl;
	cout << str2 << endl;

	system("pause");

	return 0;
}