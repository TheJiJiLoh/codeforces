#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int num;
    int ans = 0;
    cin >> num;
    for (int i = 0; i < num; i++){
        int a,b,c;
        cin >> a;
        cin >> b;
        cin >> c;
        if (a + b + c >=2){
            ans++;
        }
    }
    cout << ans;
    return 0;
}