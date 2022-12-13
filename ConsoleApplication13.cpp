// ConsoleApplication13.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
// 1. Wymyslamy przyklad do funkcji
//2. Upewniamy sie ze przyklad jest kompletny
//3. Formalizujemy przyklad
//4. Nagłówek funkcji
//5. Cialo funkcji
//6. Jezeli nie wiemy co zrobic, wracamy do przykladu

#include <iostream>
#include <vector>

using namespace std;

void wypisz(vector<int> tab) {
    int i = 0;
    while (i < tab.size()) {
        cout << tab[i] << ',';
        i++;
    }
    cout << endl;
}

int max(vector<int> tab) {
    int wynik = tab[0];
    int i = 1;
    while (i < tab.size()) {
        if (tab[i] > wynik) {
            wynik = tab[i];
        } i++;
    }
    return wynik;
}

bool czyNalezy(vector<int> tab, int element) {
    int i = 0;
    while (i < tab.size()) {
        if (tab[i] == element) {
            return true;
        } i++;
    } return false;
}

bool czyZawiera(vector<int> tab1, vector<int> tab2) {
    int i = 0;
    while (i < tab2.size()) {
        if (!czyNalezy(tab1, tab2[i])) {
            return false;
        } i++;
    }
    return true;
}

vector<int> unikalnosc(vector<int> tab) {
    vector<int> wynik;
    int i = 0;
    while (i < tab.size()) {
        if (!czyNalezy(wynik, tab[i])) {
            wynik.push_back(tab[i]);
        } i++;
    } return wynik;
} 

int suma(vector<int> tab) {
    int i = 0;
    int wynik = 0;
    while (i < tab.size()) {
        wynik = wynik + tab[i];
        i++;
    }

    return wynik;
}

double avg(vector<int> tab) {
    double wynik = suma(tab);
    return wynik / tab.size();
}

vector<int> podzielnosc(vector<int>tab, int dzielnik, int reszta) {
    vector<int> wynik;
    int i = 0;
    while (i < tab.size()) {
        if (tab[i] % dzielnik == reszta) {
            wynik.push_back(tab[i]);
        } i++;
    } return wynik;
}
int main()
{
    std::cout << "Hello World!\n";
    vector<int> tab1 = { 4, 6, 8, 2, 1 };
    vector<int> tab2 = { 1, 8 };
    vector<int> tab3 = { 5, 5, 2, 3, 5, 2, 6 };
    wypisz(tab1);

    int maksimum = max(tab1);
    cout << maksimum << endl;

    int element = 6;
        bool naleznosc = czyNalezy(tab1, element);
        cout << naleznosc << endl;

        bool zawarcie = czyZawiera(tab1, tab2);
        cout << zawarcie << endl;

        wypisz(unikalnosc(tab3));
        
        int dodawanie = suma(tab2);
        cout << dodawanie << endl;

        double sredniatabeli = avg(tab2);
        cout << sredniatabeli << endl;

        int dzielnik = 4;
        int reszta = 0;
        wypisz(podzielnosc(tab1, dzielnik, reszta));
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
