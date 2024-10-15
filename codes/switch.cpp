#include <iostream>
using namespace std;

int main() {
    int option;
    float num1, num2;

    cout << "Simple Calculator Menu" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Please choose an option (1-4): ";
    cin >> option;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (option) {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid option. Please choose between 1 and 4." << endl;
            break;
    }

    return 0;
}
