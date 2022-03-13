#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <iostream>
using namespace std;

int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{		
		if (0 == i%7 || 7 == i%10 || 7 == i/10)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}



	system("pause");
	
	return 0;
}