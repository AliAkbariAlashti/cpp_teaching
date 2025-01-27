#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

// Function to split a string into a vector of integers based on a delimiter
vector<int> splitNumbers(const string& text, char delimiter) {
    vector<int> tokens;
    istringstream stream(text);
    string token;

    // Extract tokens from the string
    while (getline(stream, token, delimiter)) {
        // Convert token to integer and add to vector if not empty and size is less than 10
        if (!token.empty() && tokens.size() < 10) {
            tokens.push_back(stoi(token));
        }
    }

    return tokens;
}

int main() {
    string input;
    cout << "Input ten numbers between 0 and 999: ";
    getline(cin, input); // Get input from user

    cout << "Input: " << input << endl;
    vector<int> winners = {}; // Vector to store indices of winners
    vector<int> numbers = splitNumbers(input, ' '); // Split input into numbers

    int max = 0;
    // Find the maximum number in the input
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Find indices of all occurrences of the maximum number
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == max) {
            winners.push_back(i + 1);
        }
    }

    // Bubble sort implementation to sort winners based on their corresponding numbers
    for (size_t i = 0; i < winners.size(); i++) {
        for (size_t j = 0; j < winners.size() - i - 1; j++) {
            if (numbers[winners[j] - 1] > numbers[winners[j + 1] - 1]) {
                swap(winners[j], winners[j + 1]);
            }
        }
    }

    // Output the indices of the winners
    cout << "Winners: ";
    for (int i : winners) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}