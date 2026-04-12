#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        long long x, y;
        cin >> x >> y;
        
        // 條件一
        if ((x + y) % 3 != 0) { cout << "NO\n"; continue; }
        
        // 計算 maxy：不超過 x/2 且 (x+a)%3==0
        long long maxy = x / 2;
        while (((x + maxy) % 3 + 3) % 3 != 0) maxy--;
        
        // 計算 miny：-(不超過 x/4 且 (x-c)%3==0 的最大 c)
        long long c = x / 4;
        while (((x - c) % 3 + 3) % 3 != 0) c--;
        long long miny = -c;
        
        cout << (miny <= y && y <= maxy ? "YES" : "NO") << "\n";
    }
}