#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, int>> clusterMines;
    vector<pair<int, int>> bowlMines;    

    int x, y;
    cout << "Enter cluster mines coordinates (x y). Enter x > 10 to finish:\n";

    while (true) {
        cin >> x;
        if (x > 10) break; 
        cin >> y;
        if (y > 10) break; 
        clusterMines.push_back({x, y});
    }

    cout << "Enter bowl mines coordinates (x y). Enter x > 10 to finish:\n";

    while (true) {
        cin >> x;
        if (x > 10) break; 
        cin >> y;
        if (y > 10) break; 
        bowlMines.push_back({x, y});
    }

    int clusterTime = clusterMines.size() * 20; 
    int bowlTime = bowlMines.size() * 15;      
    int totalTime = clusterTime + bowlTime;    

    
    cout << "Total time required: " << totalTime << " minutes\n";
    if (totalTime <= 180) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
