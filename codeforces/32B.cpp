#include <bits/stdc++.h>
using namespace std;

int main(){
    string ans;
    cin >> ans;
    for (int i = 0; i < ans.size(); i++){
        if (ans[i] == '.'){
            cout << 0;
        } else {
            if (ans[i+1] == '.'){
                cout << 1;
            } else {
                cout << 2;
            }
            i++;
        }
    }
}