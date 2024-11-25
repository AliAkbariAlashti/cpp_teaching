#include <iostream>
using namespace std;

// Project: Taxi Fare Calculator

double calculateFare(double distance) {
    double baseFare = 3.0; // Base fare
    double perKmRate = 2.5; // Rate per kilometer
    return baseFare + (distance * perKmRate);
}

int main() {
    double distance;

    cout << "Enter distance traveled (km): ";
    cin >> distance;

    double fare = calculateFare(distance);
    cout << "Your taxi fare is: " << fare << " USD" << endl;

    return 0;
}
