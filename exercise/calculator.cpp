
#include <iostream>
using namespace std;

int main() {
    int x, y;
    char opp;
    cout << "enter the first num : " << endl;
    cin >> x;
    cout << "enter the second num : " << endl;
    cin >> y;
    cout << "enter the opp (+, -, *, /): " << endl;
    cin >> opp;
    if (opp == '+') {
        cout << "the result is : " << x + y << endl;
    }
    else if (opp == '-') {
        cout << "the result is : " << x - y << endl;
    }
    else if (opp == '*') {
        cout << "the result is : " << x * y << endl;
    }
    else if (opp == '/') {
        cout << "the result is : " << x / y << endl;
    }
    else {
        cout << "try again" << endl;


        return 0;
    }
}