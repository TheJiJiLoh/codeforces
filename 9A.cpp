#include <bits/stdc++.h>
using namespace std;

int main(){
    int Y, W, win, P;
    cin >> Y >> W;
    win = 6 - max(Y, W) + 1;
    P = 6;
    int g = gcd(win, P);
    win /= g;
    P /= g;
    cout << win << "/" << P;
}