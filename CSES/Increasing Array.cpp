#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    long long ans = 0;
    cin >> n;
    vector<long long> arr;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1]){
            ans += (arr[i] - arr[i + 1]);
            arr[i + 1] = arr[i];
        } 
    }
    cout << ans;
}