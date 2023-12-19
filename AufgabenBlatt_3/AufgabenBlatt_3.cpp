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

void aufgabe_3()
{
	//zustand automat
	enum Zeichen
	{
		Start,
		H,
		A,
		Fehler,
		Ausgabe,
		Uebergang,
	};

	char eingabe;
	int a = 0, h = 0;
	bool Z;



	Zeichen Zustand = Start;

	while (Zustand != Fehler && Zustand != Uebergang)
	{
		cout << "geben sie ein zeichen ein";
		cin >> eingabe;

		switch (Zustand)
		{

		case Start: {
			if (eingabe == 'h')
			{
				Zustand = H;
				h++;
			}
			else
			{
				Zustand = Fehler;


			}
			break;
		}
		case H: {
			if (eingabe == 'a')
			{
				Zustand = A;
				a++;
			}
			else
			{
				Zustand = Fehler;
			}
			break;
		}
		case A: {
			if (eingabe == 'h')
			{
				Zustand = H;
				h++;
			}
			else if (eingabe == '!')
			{
				Zustand = Uebergang;
				Z = 1;
			}
			else
			{
				Zustand = Fehler;
				break;
			}
		}
		default: cout << "Dumm gelaufen ";

		}
	}


	switch (Zustand)
	{
	case Fehler: { cout << "Das Wort Entspricht nicht unserer Sprache"; }
			   break;

	case Uebergang: { cout << "Das Wort entspricht unseren Wuenschen" << endl;

		int zwisch;
		int j;
		zwisch = (a + h) / 2;
	

		for (zwisch; 0 < zwisch; zwisch--)
		{
			cout << "ha";
		}
		cout << "!";
	}
				  break;

	default:
		cout << "Fehler";
	}


}
	