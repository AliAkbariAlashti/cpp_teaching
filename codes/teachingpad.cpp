
#include <iostream>
using namespace std;

int main() {
    cout << "hello welcome" << endl ;
    int x ;
    int y ;
    char opp ;
    cout <<"enter the first number" << endl ;
    cin >> x ;
    cout <<"enter the second number" << endl ;
    cin >> y ;
    cout <<"enter the operation (+,-,/,*) : " << endl ;
    cin >> opp ;



    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password = "secret123";
    string guess;
    int attempts = 0;
    int maxAttempts = 3;

    while (attempts < maxAttempts) {
        cout << "Enter the password: ";
        cin >> guess;

        if (guess == password) {
            cout << "Access granted!" << endl;
            break;
        } else {
            cout << "Incorrect password. Try again." << endl;
        }

        attempts++;
    }

    if (attempts == maxAttempts) {
        cout << "Access denied. Maximum attempts reached." << endl;
    }

    return 0;
}