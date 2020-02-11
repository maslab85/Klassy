#include "klasa.h"
#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;


int tab[50];
int temp;

void klasa::randomize()
{
	srand(time(NULL));

	for (int i = 0; i < 50; i++)
	{
		tab[i] = rand() % 100 + 1;

	}
	for (int i = 0; i < 50; i++) cout << "Nie posortowane : " << tab[i] << endl;
}

void klasa::bublesort()
{
	for (int i = 1; i <= 50; i++)
	{
		for (int i = 0; i < 50 - 1; i++)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
		}
	}
}

void klasa::wypisz()
{
	for (int i = 0; i < 50; i++) cout << "Posortowane : " << tab[i] << endl;
}
