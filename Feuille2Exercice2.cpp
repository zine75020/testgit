#include "pch.h"
#include <iostream>

void Swap(int a, int b)
{
	int c = 0;
	c =a ;
	a = b;
	b = c;
}

int main()
{
	int a = 2;
	int b = 3;

	int c = a;
	c = 5;



	Swap(a, b);

}

