#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    int ans = 0;
    cin >> n;
    set<long long> list;
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        list.insert(k);
    }
    
    cout << list.size();
    
    
    return 0;
}
