#include <iostream>
using namespace std;

string weekday_founder(int day) {
    int month, day_in_month;
    if (day <= 186) {
        month = (day - 1) / 31 + 1;
        day_in_month = (day - 1) % 31 + 1;
    } else {
        day -= 186;
        month = (day - 1) / 30 + 7;
        day_in_month = (day - 1) % 30 + 1;
    }
    return "Month: " + to_string(month) + ", Day: " + to_string(day_in_month);
}

int main() {
    int day;
    cout << "Enter the day number of the year (1-365): ";
    cin >> day;

    if (day >= 1 && day <= 365) {
        cout << weekday_founder(day) << endl;
    } else {
        cout << "Invalid day number. Please enter a value between 1 and 365." << endl;
    }

    return 0;
}
