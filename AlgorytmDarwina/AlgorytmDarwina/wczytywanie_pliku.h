#ifndef WCZYTYWANIE_PLIKU_H
#define WCZYTYWANIE_PLIKU_H

#include <iostream>

#include "struktury.h"
#include "wspolczynnik.h"

/** Funkcja wczytuje ci�gi liczb z pliku do struktur.
 * @param pPokolenie adres na pierwszego osonika w pokoleniu.
 * @param nazwa_pliku nazwa pliku wej�ciowego.
 * @return ilo�� osobnik�w w generacji.
 */
int wczytaj_z_pliku(Generacja*& pPokolenie, const std::string& nazwa_pliku);

/** Funkcja wczytuje ci�gi liczb z pliku do struktur.
 * @param pPokolenie adres na pierwszego osonika w pokoleniu.
 * @return ilo�� osobnik�w w generacji.
 */
void zapisz_do_pliku(Generacja*& pPokolenie, const std::string& nazwa_pliku, int ilosc_osobnikow);

#endif // WCZYTYWANIE_PLIKU_H
