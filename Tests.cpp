#include"UzytkownikMenedzer.h"
#include "PlikZUzytkownikami.h"
#include <vector>
int _main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    ksiazkaAdresowa.logowanieUzytkownika();

    ksiazkaAdresowa.dodajAdresata();

    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    ksiazkaAdresowa.wylogowanieUzytkownika();

    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

    return 0;
}


//TESTY UzytkownikMenedzer
#include"UzytkownikMenedzer.h"
#include "PlikZUzytkownikami.h"
#include <vector>
int main()
{
    vector <Uzytkownik> uzytkownicy;
    UzytkownikMenedzer uzytkownikMenedzer("Uzytkownicy-test.txt");
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
    PlikZUzytkownikami plikZUzytkownikami("Uzytkownicy-test.txt");
    plikZUzytkownikami.zaktualizujHaslo(uzytkownicy);
}
