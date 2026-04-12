#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    while (num--){
        int n, m, d;
        cin >> n >> m >> d;
        int x = (d / m) + 1;
        int y = n / x;
        if(n % x)
           y++;
        cout << y << endl;
    }
}
