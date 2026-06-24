#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string s;
    char prev = '?';

    for (int i = 0; i < n; i++) {
        cin >> s;

        for (int j = 1; j < m; j++) {
            if (s[j] != s[0]) {
                cout << "NO";
                return 0;
            }
        }

        if (i > 0 && s[0] == prev) {
            cout << "NO";
            return 0;
        }

        prev = s[0];
    }

    cout << "YES";
    return 0;
}