/** @file */
#ifndef STRUKTURY_H_INCLUDED
#define STRUKTURY_H_INCLUDED

#include <iostream>
#define debug(x) std::cerr<<"("<<__LINE__<<")"<<#x<<" == "<<(x)<<"\n";

/**
Struktura zawiera list� gen�w dla ka�dego osobnika.
*/
struct Chromosomy
{
	int gen;	///< warto�� genu przechowywana w li�cie.
	Chromosomy* pNextChromosom;	///< wska�nik na kolejny element listy.
};

/**
Struktura zawiera list� ze szczeg�owym opisem osobnika.
*/
struct Osobnik
{
	int liczba; ///< liczba gen�w.
	int numer_osobnika; ///< numer porz�dkowy osobnika.
	double wartosc_funkcji_oceny;///< warto�� funkcji oceny.
	Chromosomy* pNaGloweListyGenow; ///< wska�nik na list� gen�w osobnika.
	Osobnik* pNext; ///< wska�nik na kolejny element listy.
};
/**
Struktura zawiera list� z adresami na pierwszego osobnika w pokoleniu.
*/
struct Generacja
{
	Osobnik* pNaPoczatekGeneracji; ///< adres na pierwszego osobnika nowej generacji.
	Generacja* pNextGeneracja; ///< wska�nik na kolejny element listy.
};
#endif // STRUKTURY_H_INCLUDED
