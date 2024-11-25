#include <iostream>
using namespace std;

// Project: Username Generator

string generateUsername(string firstName, string lastName) {
    return firstName + "." + lastName; // Combine first and last name with a dot
}

int main() {
    string firstName, lastName;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;

    string username = generateUsername(firstName, lastName);
    cout << "Your username is: " << username << endl;

    return 0;
}
