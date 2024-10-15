#include <iostream>
using namespace std;

int main() {
    float grade1, grade2, grade3, average;
    cout << "Enter three grades: ";
    cin >> grade1 >> grade2 >> grade3;

    average = (grade1 + grade2 + grade3) / 3;
    cout << "Average: " << average << endl;

    if (average >= 12) {
        cout << "You passed." << endl;
    } else {
        cout << "You failed." << endl;
    }

    return 0;
}
