#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>
#include <fstream>

#include "Adresat.h"
#include "UzytkownikMenedzer.h"
#include "PlikZUzytkownikami.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
PlikZAdresatami plikZAdresatami;
int idZalogowanegoUzytkownika;
//int idOstatniegoAdresata;
MetodyPomocnicze metodyPomocnicze;
vector <Adresat> adresaci;
Adresat podajDaneNowegoAdresata();
//int pobierzIdOstatniegoAdresata();

public:
AdresatMenedzer(string NAZWAPLIKUZADRESATAMI, int IDZALOGOWANEGOUZYTKOWNIKA): plikZAdresatami(NAZWAPLIKUZADRESATAMI){
        idZalogowanegoUzytkownika=IDZALOGOWANEGOUZYTKOWNIKA;
        plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
        //idOstatniegoAdresata=pobierzIdOstatniegoAdresata();
        };
    void dodajAdresata();

    void wyswietlDaneAdresata(Adresat adresat);
    void wyswietlWszystkichAdresatow();
};
#endif
