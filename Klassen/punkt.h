#pragma once

#include <iostream>


// Definition der Klasse Punkt
class Punkt
{
public:
	// Attribute / Eigenschaftes eines Punktes
	double x;
	double y;

	// Methode, die die Werte eines Punktes auf der Konsole anzeigt
	// = Funktionenm die in einer Klasse angegeben werden

	void werteAusgeben()
	{
		std::cout << "Punktwerte x: " << x << " y: " << y << std::endl;
	}

};