#include <bits/stdc++.h>
using namespace std;

// wrong ans
// waiting to repair
int main(){
    string dna;
    cin >> dna;
    int A = 0, C = 0, G = 0, T = 0;
    for (int i = 0; i < dna.size(); i++){
        if (dna[i] == 'A'){
            A++;
        } else if (dna[i] == 'C'){
            C++;
        } else if (dna[i] == 'G'){
            G++;
        }else if (dna[i] == 'T'){
            T++;
        }
    }
    cout << max({A, C, G, T});
} 