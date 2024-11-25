#include <iostream>
using namespace std;

// Project: Bank Interest Calculator

double calculateInterest(double principal, double rate, int years) {
    return principal * pow(1 + rate / 100, years) - principal; // Compound interest formula
}

int main() {
    double principal, rate;
    int years;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (%): ";
    cin >> rate;
    cout << "Enter number of years: ";
    cin >> years;

    double interest = calculateInterest(principal, rate, years);
    cout << "Total interest earned: " << interest << endl;

    return 0;
}
