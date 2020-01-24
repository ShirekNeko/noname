#ifndef WCZYTYWANIE_PLIKU_H
#define WCZYTYWANIE_PLIKU_H

#include <iostream>

#include "struktury.h"
#include "wspolczynnik.h"

/** Funkcja wczytuje ci�gi liczb i dodaje element na pocz�tek listy Osobnik i Chromosomy, Dodaje ilosc populacji do listy Stado
@param pOsoba adres na pierwszy element listy Osobnik
@param pChromek adres pierwszego elementu listy  chromosom�w
@param wartosc warto�� do dodania do listy 
@return ilo�� osobnik�w w generacji*/
int wczytajGeneracje(Osobnik*& pOsoba, Chromosomy*& pChromek, const std::string & nazwa_pliku);

#endif // WCZYTYWANIE_PLIKU_H
 