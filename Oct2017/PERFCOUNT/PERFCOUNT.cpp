#include <bits/stdc++.h>
using namespace std;

int n,p,a[505];

void solve() {
    cin >> n >> p;
    int cakewalk = 0, hard = 0;
    for(int i=0;i<n;i++) {
	cin >> a[i];
	if(a[i] >= p/2) cakewalk++;
	if(a[i] <= p/10) hard++;
    }
    cout << ((cakewalk == 1 && hard == 2) ? "yes" : "no") << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}
