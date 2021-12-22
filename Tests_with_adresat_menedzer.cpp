#include <iostream>
#include "KsiazkaAdresowa.h"


using namespace std;

int _main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");


    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();


   // ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

    //ksiazkaAdresowa.wylogowanieUzytkownika();

    return 0;
}

//TESTY ADRESAT_MENEDZER
#include "AdresatMenedzer.h"
int main()
{
    AdresatMenedzer adresatMenedzer("Adresaci_test.txt", 2);

    adresatMenedzer.dodajAdresata();
    adresatMenedzer.wyszukajAdresatowPoImieniu();
    adresatMenedzer.wyszukajAdresatowPoNazwisku();
    adresatMenedzer.edytujAdresata();
    adresatMenedzer.wyswietlWszystkichAdresatow();
    adresatMenedzer.usunAdresata();
    adresatMenedzer.wyswietlWszystkichAdresatow();

    return 0;
}
