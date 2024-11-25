#include <iostream>
using namespace std;

// Project: Power Calculator

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base; // Multiply the base by itself exponent times
    }
    return result;
}

int main() {
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    cout << "Result: " << power(base, exponent) << endl;
    return 0;
}
