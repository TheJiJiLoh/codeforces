#include <bits/stdc++.h>
using namespace std;
 
int main(){
      int n;
      cin >> n;
      for (int i = 0 ; i < n; i++){
        int x;
        cin >> x;
        string ball;
        cin >> ball;
      
        int ans = -1;
        for (int i = 0; i < x ; i++){
            ans++;
           if (ball[i] == 'L'){
               ans++;
               break;
            }
        }
        cout << ans << endl;
      }
}