#include <iostream>

using namespace std;

unsigned int getNWW(int a, int b) {
    int temp;
    int bakA = a;
    int bakB = b;       //Adrian Budny PAW3


    while(b != 0) {
        temp = b;
        b = a%b;
        a = temp;
    }

    if(a == 0) {
        return a;
    }

    return bakA/a*bakB;
}

int main() {
    int a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    cout << "NWW wynosi: " << getNWW(a, b) << endl;

    return 0;
}
