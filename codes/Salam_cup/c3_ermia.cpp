#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

// Converts a vector of digits into a single integer
int convertDigitsToNumber(const vector<int> &digits) {
    if (digits.empty()) return 0; // Return 0 if the vector is empty

    ostringstream oss;
    for (int digit : digits) oss << digit;

    return stoi(oss.str());
}

int main() {
    string inputString;
    cout << "Insert the input string: ";
    cin >> inputString;

    vector<int> digitBuffer, extractedNumbers;
    int tankCount = 0, soldierCount = 0, airplaneCount = 0;

    // Process the input string character by character
    for (char ch : inputString) {
        if (isdigit(ch)) {
            // If the character is a digit, add it to the buffer
            digitBuffer.push_back(ch - '0');
        } else {
            // If a non-digit is encountered, process the number stored in the buffer
            if (!digitBuffer.empty()) {
                extractedNumbers.push_back(convertDigitsToNumber(digitBuffer));
                digitBuffer.clear();
            }

            // Count occurrences of 't', 'a', and 'h'
            switch (ch) {
                case 'a': soldierCount++; break;
                case 'h': airplaneCount++; break;
                case 't': tankCount++; break;
            }
        }
    }

    // Process any remaining digits in the buffer
    if (!digitBuffer.empty()) extractedNumbers.push_back(convertDigitsToNumber(digitBuffer));

    // Find the two largest numbers
    int x = 0, y = 0;
    for (int num : extractedNumbers) {
        if (num >= x) {
            y = x;
            x = num;
        }
    }

    // Special condition check
    if (x > 1000 || extractedNumbers.size() < 2) {
        cout << "Telecommunication Deception!" << endl;
        return 1;
    }

    // Output results
    cout << "X: " << x << "\nY: " << y
         << "\nSoldiers: " << soldierCount << "\nTanks: " << tankCount
         << "\nAirplanes: " << airplaneCount << endl;

    return 0;
}
