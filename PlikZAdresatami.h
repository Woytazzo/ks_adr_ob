#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
{
const string nazwaPlikuZAdresatami;
MetodyPomocnicze metodyPomocnicze;
int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
int idOstatniegoAdresata;

public:
PlikZAdresatami(string PLIKZADRESATAMI) : nazwaPlikuZAdresatami(PLIKZADRESATAMI){
    idOstatniegoAdresata=0;
};
vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
void dopiszAdresataDoPliku(Adresat adresat);
string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
int pobierzIdOstatniegoAdresata();
void powiekszOJedenIdOstatniegoAdresata();
};
#endif
