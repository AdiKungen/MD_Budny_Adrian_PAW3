#include <iostream>

using namespace std;

unsigned int getEuler(unsigned int number) {
    int temp;
    int a, b;
    unsigned int licznik;       //Adrian Budny PAW3

    for(int i = 1; i < number; i++) {
        a = i;
        b = number;

        while(b != 0) {
            temp = b;
            b = a%b;
            a = temp;
        }
        if(a == 1) {
            licznik++;
        }
    }
    return licznik;
}

int main() {
    unsigned int number;
    cout << "Podaj liczbe, dla ktorej chcesz liczbe liczb wzglednie pierwszych: ";
    cin >> number;

    cout << "Liczba liczb wzglednie pierwszych: " << getEuler(number) << endl;
    return 0;
}
