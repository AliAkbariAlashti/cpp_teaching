#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "تعداد دانشجویان را وارد کنید: ";
    cin >> n;

    string names[n];
    float scores[n], sum = 0, maxScore = 0, minScore = 20;

    for (int i = 0; i < n; i++) {
        cout << "نام دانشجو " << i + 1 << ": ";
        cin >> names[i];
        cout << "نمره " << names[i] << ": ";
        cin >> scores[i];

        sum += scores[i];  
        if (scores[i] > maxScore) maxScore = scores[i];
        if (scores[i] < minScore) minScore = scores[i];
    }

    float avg = sum / n;

    cout << "\n--- گزارش نمرات ---\n";
    cout << "میانگین نمرات: " << avg << endl;
    cout << "بیشترین نمره: " << maxScore << endl;
    cout << "کمترین نمره: " << minScore << endl;

    cout << "\nوضعیت دانشجویان:\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << " - نمره: " << scores[i] 
             << " - " << (scores[i] >= 10 ? "قبول" : "مردود") << endl;
    }

    return 0;
}
