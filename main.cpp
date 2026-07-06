#include <iostream>

using namespace std;

// 1. PROTOTIPI FUNKCIJA (Kompajler mora unapred da zna za njih jer su implementirane ispod main-a)
float izracunaj_bmi(float tezina, float visina);
void prikazi_kategoriju(float bmi);

int main() {
    float tezina_korisnika, visina_korisnika;

    cout << "=== Kalkulator Indeksa Telesne Mase (BMI) ===" << endl;
    
    // Unos podataka preko cin strima
    cout << "Unesite vasu tezinu u kilogramima: ";
    cin >> tezina_korisnika;
    
    cout << "Unesite vasu visinu u metrima (npr. 1.75): ";
    cin >> visina_korisnika;

    // 2. POZIV FUNKCIJE KOJA VRAĆA VREDNOST
    // Parametri se prenose po vrednosti (prave se lokalne kopije unutar funkcije)
    float rezultat_bmi = izracunaj_bmi(tezina_korisnika, visina_korisnika);

    cout << "\nVas BMI indeks iznosi: " << rezultat_bmi << endl;

    // 3. POZIV VOID FUNKCIJE (Služi samo za ispis, ne da vrati vrednost preko return)
    prikazi_kategoriju(rezultat_bmi);

    return 0;
}

// 4. DEFINICIJA FUNKCIJE KOJA VRAĆA FLOAT
// Koristi ključnu reč 'return' da pošalje decimalni rezultat nazad u main
float izracunaj_bmi(float tezina, float visina) {
    return tezina / (visina * visina); 
}

// 5. DEFINICIJA VOID FUNKCIJE
// Nema povratnu vrednost (bilo kakav 'return broj;' ovde bi napravio grešku)
void prikazi_kategoriju(float bmi) {
    cout << "Kategorija: ";
    if (bmi < 18.5) {
        cout << "Uhranjenost ispod normale." << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "Normalna telesna tezina." << endl;
    } else {
        cout << "Povecana telesna tezina (prekomerna uhranjenost)." << endl;
    }
}
