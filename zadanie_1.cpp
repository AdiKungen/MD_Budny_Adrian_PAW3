#include <iostream>

using namespace std;

string getFactors(unsigned int number) {
    string wynik = "";
    int potega = 0;
    int licznik = 0;        //Adrian Budny PAW3

    if(number > 1) {
        for(int czynnik = 2; number > 1; ++czynnik) {
            potega = 0;
            while (number % czynnik == 0) {
                potega++;
                number /= czynnik;
            }
            if(potega > 0) {
                if(licznik > 0) {
                    wynik += " * ";
                } else {
                    wynik += "Czynniki: ";
                }
                licznik++;
                wynik += to_string(czynnik) + "^" + to_string(potega);
            }
        }
    } else {
        wynik = "Podano niepoprawna liczbe!";
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
