#include <bits/stdc++.h>
using namespace std;

int main(){
    int a =0, b = 0;
    cin >> a;
    for (int i = 0; i < a; i++){
        int x = 0, y = 0;
        bool ans = false;
        cin >> b;
        string move;
        cin >> move;
        for (int j = 0; j < b; j++){
            if (move[j] == 'U') {
                y++;
            } else if (move[j] == 'D') {
                y--;
            } else if (move[j] == 'R') {
                x++;
            } else if (move[j] == 'L') {
                x--;
            }
            if (x == 1 && y == 1) {
                ans = true;
                break;
            }
        }
        if (ans == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }  
}