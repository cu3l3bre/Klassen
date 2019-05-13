#pragma once

#include <iostream>
#include <string>

// Definition der Klasse, die eine Person darstellt
// standardm‰ﬂig sind klassen als private , deswegen vorerst hier erstmal public
class Person
{
public:

	// Attribute
	std::string vorname;
	std::string nachname;

	// Methoden zum Anzeige des Namen einer Person
	void namenNennen()
	{
		std::cout << vorname + " " + nachname << std::endl;
	}


};