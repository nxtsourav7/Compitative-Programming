/**
 *	author 	: nxtsourav7
 *	created : 2023-12-31 09:04:06
**/

#include<bits/stdc++.h>
long long int T = 1;
using namespace std;


#define endl '\n'
#define ff first 
#define ss second
#define int long long 
#define double long double


#define vi vector<int>
#define pii pair<int,int>
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


auto solve = []() {
	int n,m,a,b;
    cin >> n >> m >> a >> b;

    if((b/m)<a) {
        cout << min((n/m+1)*b,(n/m)*b + (n%m)*a);
    }
    else {
        cout << n*a;
    } 
};


int32_t main() {
	fastIO;
	// cin >> T;
	for(int t=1; t<=T; ++t) {
		// cout << "Case #" << t << ": ";
		solve();
        cout << endl;
	}
	return 0;
}