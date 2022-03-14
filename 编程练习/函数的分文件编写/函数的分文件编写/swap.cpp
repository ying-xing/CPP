#pragma once

#include "swap.h"

void Swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a=" << a << " b=" << b << endl;
}