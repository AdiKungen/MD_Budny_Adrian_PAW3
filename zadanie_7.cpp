#include <iostream>

using namespace std;

unsigned int getPrimaryNumbers(unsigned int number) {
    int licznik = 0;
    bool czyDzielniki = false;      //Adrian Budny PAW3

    for(int i = 2; i <= number; i++) {
        czyDzielniki = false;
        for(int j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                czyDzielniki = true;
            }
        }
        if(!czyDzielniki) {
            licznik++;
        }
    }
    return licznik;
}

int main() {
    unsigned int number;
    cout << "Podaj liczbe, dla ktorej chcesz znalezc liczbe liczb pierwszych: ";
    cin >> number;

    cout << "Ilosc liczb pierwszych: " << getPrimaryNumbers(number) << endl;

    return 0;
}
