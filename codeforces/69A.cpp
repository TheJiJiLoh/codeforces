#include <bits/stdc++.h>
using namespace std;

int main(){
    int t = 0, sx = 0, sy = 0, sz = 0;
    cin >> t;
    for (int i = 0; i < t; i++){
        int x = 0, y = 0, z = 0;
        cin >> x >> y >> z;
        
        sx += x;
        sy += y;
        sz += z;
    }
    if (sx == 0 && sy == 0 && sz == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}