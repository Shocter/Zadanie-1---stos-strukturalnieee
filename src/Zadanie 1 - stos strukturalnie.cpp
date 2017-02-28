//============================================================================
// Name        : Zadanie.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;



struct stos
{
	stos *next;
	stos *top;
	int liczba;
	int max;
};

int losowanie_ilosci_liczb_na_stosie()
{
	srand (time (NULL));
	int ilosc;
	ilosc=(rand()%10)+1;
	return ilosc;
}

void losowanie_dodawanie()
{
	stos top = NULL;
	srand (time (NULL));
	for (int i=0; i<losowanie_ilosci_liczb_na_stosie(); i++)
	{
		top->liczba=(rand()%100)+10;
	}
	return tab[6];
}

void push()
{
	/*stos *wsk;
	stos *nowy = new stos;
	wsk=wsk->top;
	cout<<"podaj: ";
	cin>>nowy->liczba;
	nowy->next=NULL;
	wsk->next=nowy;
*/
}

int main()
{


	system("pause");
	return 0;
}
