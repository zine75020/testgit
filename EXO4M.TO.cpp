#include "pch.h"
#include <iostream>

using namespace std;

const int N = 10;
const int M = 20;

int main()
{
	int tabA[N];
	int tabB[N];
	int tabC[M];
	int nb;

	for (nb = 0; nb < 10; nb++)
	{
		cout << "Tab A: Entrer un chiffre" << endl;
		cin >> tabA[nb];
	}

	for (nb = 0; nb < 10; nb++)
	{
		cout << "Tab B : Entrez un chiffre" << endl;
		cin >> tabB[nb];
	}
	
	for (nb = 0; nb < M; nb++)
	{
		if (nb < N)
		{
			tabC[nb] = tabA[nb];

		}
		else {
			tabC[nb] = tabB[nb - N];
		}
		

	}
	
	for (nb = 0; nb < M; nb++)
	{
		cout << tabC[nb]<<endl;
	}



	system("pause");
	return 0;
}

