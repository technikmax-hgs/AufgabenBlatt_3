// AufgabenBlatt_3.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <iostream>
#include <math.h>
using namespace std;



void aufgabe_1();
void aufgabe_2();
void aufgabe_3();
void aufgabe_4();
void aufgabe_5();
void aufgabe_6();


int main()
{
	//aufgabe_1();
	//aufgabe_2();
	aufgabe_3();
	//aufgabe_4();
	//aufgabe_5();
	//aufgabe_6();
}



void aufgabe_2()
{
	int zeil = 0;
	
	int n = 1;
	int z = 0;

	for (zeil; zeil < 10; zeil++)
	{
		int spalte = 0;

		for (spalte; spalte < 10; spalte++)
		{
			
			cout << n << " ";
			n++;
		}
		z++;
		cout << endl; 
		
	}

}

