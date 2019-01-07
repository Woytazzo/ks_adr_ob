#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

#include <iostream>

using namespace std;

class Uzytkownik
{
    int id;
    string login;
    string haslo;

public:
    void ustawId(int id);
    void ustawLogin(string login);
    void ustawHaslo(string haslo);
    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();

};

#endif
