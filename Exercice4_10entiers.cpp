#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int somme = 0;
	int nb = 0;
	while(i<10)
	{ 
		cout << "Veuillez entrer un nombre entier" << endl;
		cin >> nb;
		somme = somme + nb;
		i++;
	}
	
	cout << "Resultat:"<< somme << endl;
	system("pause");
	return 0;


}

