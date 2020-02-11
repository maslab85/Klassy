#include <iostream>
/*#include <stdio.h>
#include <time.h>*/
#include "klasa.h"

using namespace std;

int main()
{
	/*int tab[tr]=new ;
	int temp=0;
	srand(time(NULL));

	for (int i = 0; i < tr; i++)
	{
		tab[i]=rand()%100+1;

	}
	for (int i = 0; i < tr; i++) cout << "Nie posortowane : " << tab[i] << endl;
	getchar();
	for (int i = 1; i <= tr; i++)
	{
		for (int i = 0; i < tr-1; i++)
		{
			if(tab[i]>tab[i+1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i+1] = temp;
			}
		}
	}
	for (int i = 0; i < tr; i++) cout << "Posortowane : " << tab[i] << endl;
	return 0;*/
	cout << "Witaj w programie losujacym 50 liczb po czym sortuje go metoda bombelkowa" << endl;
	cout << "-------------------------------------------------------------------------" << endl;
	getchar();
	klasa p1;
	p1.randomize();
	getchar();
	p1.bublesort();
	p1.wypisz();
	cout << endl;
	cout << "Najmniejsza liczba to :"<<p1.tab[0] << endl;
	cout << "Najwieksza liczba to :" << p1.tab[49] << endl;
	cout << "POSORTOWANE!!!!" << endl;
	return 0;

}

