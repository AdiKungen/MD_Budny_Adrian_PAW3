#include <iostream>

using namespace std;

unsigned int getNWD(int a, int b) {
    int temp;       //Adrian Budny PAW3

    while(b != 0) {
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    if (getNWD(a, b) == 0) {
        cout << "Nie istnieje NWD dla dwoch zer!" << endl;
    } else {
        cout << "NWD wynosi: " << getNWD(a, b) << endl;
    }

    return 0;
}
