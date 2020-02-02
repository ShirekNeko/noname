/** @file */

#ifndef EUGENIKA_H
#define EUGENIKA_H

#include <iostream>
#include "struktury.h"
#include "wspolczynnik.h"
#include "eugenika.h"

/** Funkcja losuj�ca.
 * @param lewy lewy zakres losowanie.
 * @param prawy prawy akres losowania.
 * @return wynik
 */
int losowanie(int lewy, int prawy);

/** Wyszukuje osobnika w li�cie
 * @param numer_osobnika numer porz�dkowy osobnika.
 * @param pOsoba g�owa listy osobnik�w.
 * @return adres szukanego osobnika.
 */
Osobnik* szukanieOsobnika(int numer_osobnika, Osobnik* pOsoba);

/** Wyszukuje adres genu
 * @param pOsobnik g�owa listy Osobnik.
 * @return adres szukanego chromosomu.
 */

Chromosomy* znajdz_przeciecie(Osobnik*& pOsobnik);

/**
 * @param pOsobnik g�owa listy Osobnik.
 * @return ilo�� gen�w w li�cie.
 */
int liczenie_ilosci_genow(Osobnik*& pHeadOsobnik);

/** Funckaj zbiera dane spod funkcji i wykonuje swap
 * @param osobnikA numer porz�dkowy osobnika A.
 * @param osobnikB numer porz�dkowy osobnika B.
 * @param pOsoba g�owa listy osobnik�w.
 * @return adres szukanego osobnika.
 */
void krzyzowanie_genow(int osobnikA, int osobnikB, Osobnik*& pOsoba);

/** Losuje par� osobnik�w do krzyzowania gen�w.
 * @param ile_par wsp�czynnik p.
 * @param ile_osobnikow ilo�� osobnik�w w obecnym pokoleniu.
 * @param pOsobnik g�owa listy osobnik�w.
 */
void doborOsobnikow(int ile_par, int ile_osobnikow, Osobnik*& pOsobnik);

/** Funkcja wykonuje selekjc� naturaln� na aktulanej populacji.
 * @param pOsobnik wska�nik na g�ow� listy.
 * @param ilosc_osobnikow liczba osobnik�w w starym pokoleniu.
 * @param wspolczynnik_rozmnazania parametr, powy�ej kt�rego osobniki s� klonowane.
 * @param wspolczynnik_wymierania wspolczynnik parametr, poni�ej kt�rego osobniki s� usuwane.
 */
int selekcja(Osobnik*& pOsobnik, Generacja*& pPokolenie, int ilosc_osobnikow, double wspolczynnik_rozmnazania, double wspolczynnik_wymierania);

/** Funkcja sprz�ta dane po symulacji.
 * @param pHeadOsobnik wska�nik na g�ow� listy.
 */
void usuwanie(Osobnik*& pHeadOsobnik);

/** Funkcja sprz�ta dane po symulacji.
 * @param pPokolenie wska�nik na g�ow� listy.
 */
void usuwanie_wszystkiego(Generacja*& pPokolenie);
#endif // EUGENIKA_H
