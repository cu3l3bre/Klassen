// Einbinden von Bibliotheken der C++ Standardbibliothek
#include <iostream>
#include <string>

// Einbinden von Bibliotheken
#include "punkt.h"
#include "person.h"
#include "datum.h"

//#include <iomanip> // für setfill() und set()

using namespace std;

int main()
{
	cout << "Programm zu Klassen" << endl << endl;
	
	// ein Objekt der Klasse Punkt / Instanz
	
	Punkt punkt1;
	Punkt punkt2;


	punkt1.x = 1;
	punkt1.y = 2;


	punkt2.x = 11;
	punkt2.y = 22;


	cout << punkt1.x << "  " << punkt1.y << endl;

	cout << "Ausgabe der Punkte mit Methoden" << endl;
	punkt1.werteAusgeben();
	punkt2.werteAusgeben();

	




	// Objekte der Klasse Person anlegen
	Person person1;
	Person person2;



	person1.vorname		= "Max";
	person1.nachname	= "Mustermann";

	person2.vorname = "Maxine";
	person2.nachname = "Musterfrau";

	cout << person1.vorname << "\t" << person1.nachname << endl;
	cout << person2.vorname << "\t" << person2.nachname << endl;

	cout << "Ausgabe der Namen mit Methoden" << endl;

	// Verwendung der Parameter mit Parameter (Zusatzinformation)
	person1.namenNennen(true);
	person2.namenNennen(false);





	// Objekt der Klasse Datum
	Datum heute;

	// das heutige Datum mit Werten füllen
	heute.jahr	= 2019;
	heute.monat	= 5;
	heute.tag	= 13;

	if (heute.tag < 10)
	{
		cout << "0";

	}
	cout << heute.tag << ".";


	if (heute.monat < 10)
	{
		cout << "0";
	}
	cout << heute.monat << "." << heute.jahr << endl;


	// Auch möglich das so zu machen zur darstellung der nullen
	//cout << setfill('0') << setw(3) <<  heute.monat << endl;






	system("pause");
	return 0;
}