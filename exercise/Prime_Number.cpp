#include <iostream>
using namespace std;

// Project: Prime Number Checker

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) return false; // Numbers less than 2 are not prime
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) return false; // If divisible, it's not prime
    }
    return true;
}

int main() {
    int num;

    cout << "Enter a number to check if it's prime: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
