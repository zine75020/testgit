#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	
	int i = 0;
	int nb = 0;
	int lapluspetite = INT32_MAX;
	while (i < 10)
	{
		cout << "Veuillez entrer un nombre entier" << endl;
		cin >> nb;
		if (nb < lapluspetite)
			lapluspetite = nb;
		
		i++;		
	}
	cout << "Le plus petit nombre est "<<lapluspetite << endl;
	system("pause");
	return 0;

}
