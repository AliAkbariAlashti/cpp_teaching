#include <iostream>
using namespace std;

// Project: BMI and Health Status Calculator

double calculateBMI(double weight, double height) {
    return weight / (height * height); // BMI formula
}

string healthStatus(double bmi) {
    if (bmi < 18.5) return "Underweight";
    else if (bmi >= 18.5 && bmi < 24.9) return "Normal weight";
    else if (bmi >= 25 && bmi < 29.9) return "Overweight";
    else return "Obesity";
}

int main() {
    double weight, height;

    cout << "Enter your weight (kg): ";
    cin >> weight;
    cout << "Enter your height (m): ";
    cin >> height;

    double bmi = calculateBMI(weight, height);
    cout << "Your BMI is: " << bmi << endl;
    cout << "Health Status: " << healthStatus(bmi) << endl;

    return 0;
}
