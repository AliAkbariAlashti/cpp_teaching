#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<pair<int, int>> directions = {
    {1, 0}, {-1, 0}, {0, 1}, {0, -1},
    {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
};

int main(){
    vector<pair<int, int>> tir_bars(3);
    for(auto &p : tir_bars){
        cin >> p.first >> p.second;
    }

    vector<pair<int, int>> tanks(5);
    for(auto &p : tanks){
        cin >> p.first >> p.second;
    }

    set<int> destroyed;

    for(auto &tank : tanks){
        int tx = tank.first;
        int ty = tank.second;

        for(auto &dir : directions){
            int dx = dir.first;
            int dy = dir.second;
            int x = tx + dx;
            int y = ty + dy;

            while(x >=0 && x <8 && y >=0 && y <8){
                for(int i=0;i<tir_bars.size();i++){
                    if(i != destroyed.size()){
                        if(tir_bars[i].first == x && tir_bars[i].second == y){
                            destroyed.insert(i);
                        }
                    }
                }
                x += dx;
                y += dy;
            }
        }
    }

    int remaining = 3 - destroyed.size();
    cout << remaining;
    return 0;
}
