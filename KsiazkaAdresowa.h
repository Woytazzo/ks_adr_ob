#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string nazwaPlikuZAdresatami;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string NAZWAPLIKUZADRESATAMI)
    : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};

    ~KsiazkaAdresowa()
    {delete adresatMenedzer;    }

    void rejestracjaUzytkownika();
    void wypiszWszystkieDaneUzytkownika();
    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void zmianaHaslaZalogowanegoUzytkownika();
};

#endif
