#include "pch.h"
#include <iostream>

using namespace std;

bool tablo(int tab[], int n,int &v)
{
	bool BOULE = false;

	int compteur = 0;

	for (int i = 0; i < n; i++)
	{
		if (tab[i] <= 10 && tab[i] >= 1)
		{
			v = tab[i];
			return true;
		}
	}

	//do
	//{
	//	if (tab[compteur] <= 10 && tab[compteur] >= 1)
	//	{
	//		BOULE = true;
	//		v = tab[compteur];
	//	}
	//	compteur++;
	//} while (!BOULE && compteur < n);

	return false;
}

int main()
{
   
	int test[5]{ 14,14,5,13,14 };
	int n = 3;
	int v;
	bool BOULE = tablo(test, n, v);;
	cout << "Le bool :" << BOULE << " et v :" << v << endl;

	system("pause");
	return 0;
}
