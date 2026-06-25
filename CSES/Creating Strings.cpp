#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<char> perm;
	string letter;
	long long n = 0;
	cin >> letter;
	for (int i = 0; i < letter.size(); i++) perm.push_back(letter[i]);
	sort(perm.begin(), perm.end());
	do {
	    n++;
	} while (next_permutation(perm.begin(), perm.end()));
	cout << n << endl;
	
	do {
		for (char n : perm) cout << n;
		cout << endl;
	} while (next_permutation(perm.begin(), perm.end()));
}