#include "pch.h"
#include <iostream>

using namespace std;
const int N = 10;
int main()
{

	int tab[N];
	int nb;

	for (nb = 0; nb < N; nb++)
	{
		cout << "Veuillez entrer un chiffre" << endl;
		cin >> tab[nb];

	}

	int indice = 0;

	for (nb = 1; nb < N; nb++)
	{
		if (tab[indice] < tab[nb])
		{
			indice = nb;
		}
	}

	cout << indice << endl;
	system("pause");
	return 0;

}
