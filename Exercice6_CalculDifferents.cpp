#include "pch.h"
#include <iostream>
using namespace std;

int main()

{
	int i = 0;
	int nombre = 0;
		cout << "Bonjour bienvenue dans le programme le plus sophistiqué du monde, veuillez entrer un nombre" << endl;
		cin >> nombre;
		cout << "1.Ajouter 1" << endl << "2.Multiplier par 2" << endl << "3.Soustraire 4" << endl << "4.Quitter" << endl;
		cin >> i;
		if (i == 1)
		{
			cout << nombre + 1 << endl;
		 }
		if (i == 2)
		{
			cout << nombre * 2 << endl;
		}
		if (i == 3)
		{
			cout << nombre - 4 << endl;
		}
		if (i == 4)
		{
			return 0;
		}







 system("pause");
 return 0;
}
