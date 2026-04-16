#include <bits/stdc++.h>
using namespace std;

int main(){
    int t = 0, ans = 0;
    cin >> t;
    for (int i =0; i < t; i++){
        string x;
        cin >> x;
        if (x[1] == '+'){
            ans++;
        } else if (x[1] == '-'){
            ans--;
        }
    }
    cout << ans << endl;
}