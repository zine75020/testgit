#include "pch.h"
#include <iostream>

using namespace std;

double addition(double a, double b)
{
	double resultat;
	resultat = a + b;
	return resultat;
}
double soustraction(double a, double b)
{
	double resultat;
	resultat = a - b;
	return resultat;
}
double multiplication(double a, double b)
{
	double resultat;
	resultat = a * b;
	return resultat;
}
double division(double a, double b)
{
	double resultat;
	resultat = a / b;
	return resultat;
}

int main()
{
	double resultat, a, b;
	int nb;

	cout << "Bonjour veuillez entrer le chiffre" << endl;
	cin >> a;
	cin >> b;

	do
	{
		cout << "1.Addition" << endl;
		cout << "2.Soustraction" << endl;
		cout << "3.Multiplication" << endl;
		cout << "4.Division" << endl;
		cout << "5.Quitter" << endl;

		cin >> nb;
		switch (nb)
		{
		case 0:
			cout << "Seulement un chiffre entre 1 et 4 svp" << endl ;
				break;
		case 1:
			resultat = addition(a, b);
			break;
		case 2: resultat = soustraction(a, b);
			break;
		case 3: resultat = multiplication(a, b);
			break;
		case 4: resultat = division(a, b);
			break;
		default:
				nb = 5;
			break;
		}
		cout << "=" << resultat << endl;
	} while (nb < 5);

	return 0;
}