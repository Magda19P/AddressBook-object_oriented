#ifndef PLIKZUZYTKOWNIAKMI_H
#define PLIKZUZYTKOWNIAKMI_H

#include <fstream>
#include <iostream>
#include <vector>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZUzytkownikami : public PlikTekstowy {

    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    bool czyPlikJestPusty(fstream &PlikTekstowy);

public:
    PlikZUzytkownikami(string nazwaPliku): PlikTekstowy(nazwaPliku) {};  //lista inicjalizacyjna
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
};

#endif
