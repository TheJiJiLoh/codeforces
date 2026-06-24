#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector <int> num;
    cin >> n;
    for (int i = 0; i < n; i++){
        int pb;
        cin >> pb;
        num.push_back(pb);
    }
    sort(num.begin(), num.end());
    num.erase(unique(num.begin(), num.end()), num.end());
    
    if (num.size() < 2){
        cout << "NO" << endl;
    } else {
        cout << num[1] << endl;
    }
}