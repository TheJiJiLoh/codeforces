#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin >> n;
    vector <int> coins(n);

    for (int i = 0; i < n; i++){
        int num = 0;
        cin >> num;
        sum += num;
        coins.push_back(num);
    }

    sort(coins.begin(), coins.end(), greater <int>());

    int all = 0;
    int con = 0;
    for (int i = 0; i < n; i++){
        all += coins[i];
        con++;

        if (all > sum - all){
            break;
        }
    }
    cout << con << endl;
}