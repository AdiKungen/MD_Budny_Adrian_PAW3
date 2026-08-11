#include <iostream>

using namespace std;

bool checkPrimary(unsigned int number) {
    if(number < 2) {
        return false;       //Adrian Budny PAW3
    } else {
        for(int i = 2; i*i <= number; i++) {
            if(number % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    unsigned int number;
    cout << "Podaj liczbe, aby sprawdzic czy jest liczba pierwsza: ";
    cin >> number;

    if(checkPrimary(number)) {
        cout << number << " jest liczba pierwsza" << endl;
    } else {
        cout << number << " nie jest liczba pierwsza" << endl;
    }

    return 0;
}
