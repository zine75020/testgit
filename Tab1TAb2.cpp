#include "pch.h"
#include<iostream>
//wassup
using namespace std;

void saisir(int t[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "Tapez la valeur numero " << i << " : ";
		cin >> t[i];
	}
}

void afficher(int t[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << t[i] << " ";
	cout << endl;
}

int f(int t1[], int n, int t2[])
{
	int i = 0, nb = 0;

	for (i = 0; i < n; i++)if (t1[i] >= 0 && t1[i] <= 10) { t2[nb] = t1[i]; nb++; }
	return nb;
}

int main()
{
	int a[10], b[10];
	int nb;

	saisir(a, 10);
	nb = f(a, 10, b);
	cout << "VOICI LES VALEURS ENTRE 0 ET 10 : " << endl;
	afficher(b, nb);
	return 0;
}