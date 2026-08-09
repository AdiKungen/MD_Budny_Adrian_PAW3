#include <iostream>

using namespace std;

string getFactors(unsigned int number) {
    string wynik = "";
    int potega = 0;
    int licznik = 0;
    bool czyPierwsza = false;       //Adrian Budny PAW3

    if(number > 1) {
        for(int czynnik = 2; number > 1; ++czynnik) {
            czyPierwsza = true;
                for(int i = 2; i*i <= czynnik; i++) {
                    if(czynnik % i == 0) {
                        czyPierwsza = false;
                }
            }
            if(czyPierwsza) {
                potega = 0;
                while (number % czynnik == 0) {
                    potega++;
                    number /= czynnik;
                }
                if(licznik == 0) {
                    wynik += "Postac ciagowa: [";
                }
                licznik++;
                wynik += to_string(potega);
            }
        }
    } else {
        wynik = "Podano niepoprawna liczbe!";
    }
    if(licznik > 0) {
        wynik += "]";
    }
    return wynik;
}

int main()
{
    unsigned int number;
    cout << "Podaj liczbe naturalna wieksza od 1 do faktoryzacji: ";
    cin >> number;
    cout << getFactors(number) << endl;
    return 0;
}
