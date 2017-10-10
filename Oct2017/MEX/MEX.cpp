#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
int n,k;
bool a[N];

bool clean() {
    for(int i=0;i<N;i++) a[i] = 0;
}

void solve() {
    clean();
    cin >> n >> k;
    for(int i=0;i<n;i++) {
	int x; cin >> x;
	a[x] = 1;
    }
    int ans = -1;
    for(int i=0;;i++) {
	if(!a[i]) {
	    if(k) k--;
	    else {
		ans = i;
		break;
	    }
	}
    }
    cout << ans << endl;
}


int main() {
    int t; cin >> t;
    while(t--) solve();
}
