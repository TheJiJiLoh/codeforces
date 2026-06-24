#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, t;
    cin >> n >> t;
    vector<long long> input;
    for (int i = 0; i < n; i++){
        int num = 0;
        cin >> num;
        input.push_back(num);
    }
    
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
                if (input[i] + input[j] == t){
                    cout << i + 1 << " " << j + 1;
                    return 0;
            }
        }
    }

    cout << "IMPOSSIBLE";
    }