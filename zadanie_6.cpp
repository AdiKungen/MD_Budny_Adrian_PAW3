#include <iostream>

using namespace std;

bool checkCoprimary(unsigned int a, unsigned int b) {
    int temp;       //Adrian Budny PAW3

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    if(a == 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    unsigned int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    if(checkCoprimary(a, b)) {
        cout << "Powyzsze liczby sa wzglednie pierwsze!" << endl;
    } else {
        cout << "Powyzsze liczby nie sa wzglednie pierwsze!" << endl;
    }

    return 0;
}
