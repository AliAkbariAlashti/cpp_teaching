#include <iostream>
#include <string>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

int main() {
	cout << "cipher pweaseee: ";
	string input;
	cin >> input;
	int len = input.length();
	
	if (len > 50) {
		cout << "beep boop ahaha";
		return -1;
	}
	
	int bazsar = 0;
	int tanks = 0;
	int peymahava = 0;
	int largest = -1;
	int second_largest = -1;
	
	string int_builder = "";
	
	for (int i = 0; i < len; i++) {
		char c = input[i];
		if (isdigit(c)) {
			int_builder += c;
		} else if (!int_builder.empty()) {
			int k = atoi(int_builder.c_str());
			if (k < 1000 && k > largest) {
				second_largest = largest;
				largest = k;
			}
			int_builder = "";
		}
		if (c == 'a') {
			bazsar++;
		}
		if (c == 't') {
			tanks++;
		}
		if (c == 'h') {
			peymahava++;
		}
	}
	
	if (largest == -1 || second_largest == -1) {
		cout << "z..z.x...c.wjhshhhh SINGLA lost";
		return -1;
	}
	
	cout << largest << endl;
	cout << second_largest << endl;
	cout << bazsar << endl;
	cout << peymahava << endl;
	cout << tanks << endl;
	
	return 0;
}

