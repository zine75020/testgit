#include "pch.h"
#include <iostream>

using namespace std;

double FonctionAffine(double a, double x, double b)
{
	double f;
	f = a * x + b;
	return f;
}

int main()
{
	double x, a, b, f;

	cout << "onjour veuillez entrezr a, x et b dans l'ordre" << endl;
	cin >> a >> x >> b;
	f = FonctionAffine(a, x, b);
	cout << "f" << x << "=" << f;
	return 0;
}