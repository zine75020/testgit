#include "pch.h"
#include <iostream>

using namespace std;

int Tablo(int tabA[],int tailletablo, int n)
{
	bool BOULE = false;
	int i = 0;

	do {
		
		cin >> tabA[tailletablo];
		i++;

	} while (i <tailletablo);
	
	if (tabA[tailletablo] < 10 && tabA[tailletablo]>0)
		{
			BOULE = true;
		}
		
		cout << BOULE << endl;
		return BOULE ;
}




int main()
{
	int tabA[5];
	int n = 5;
	int tailletableau = 5;
	bool BOULE = false;
	BOULE = Tablo(tabA,tailletableau,n);

	system("pause");
	return 0;
}
