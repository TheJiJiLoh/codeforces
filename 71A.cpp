#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++ ){
        string word;
        cin >> word;
        int ans = -2;
        if (word.size() > 10){
            for (int j = 0; j < word.size(); j++){
                ans++;
            }
            cout << word[0] <<  ans << word[word.size() - 1] << endl;
        } else {
                cout << word << endl;
            }
        }
    }
