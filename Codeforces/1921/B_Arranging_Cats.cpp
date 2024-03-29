/**
 *	author 	: nxtsourav7
 *	created : 2024-01-15 20:59:13
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
#define vpii vector<pii>
#define sz(x) (int)x.size()
#define each(x) for(auto &it:x)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fastIO cin.tie(0)->sync_with_stdio(0)


#define read(n) int n;cin >> n;
#define inVec(x,n) vi x(n);each(x) cin >> it;


auto solve = []() {
	int n;
    string s,f;
    cin >> n >> s >> f;

    int cs = 0;
    int cf = 0;
    for(int i=0; i<n; ++i) {
        if(f[i]=='1' and s[i]=='0') cf++;
        if(f[i]=='0' and s[i]=='1') cs++;
    }

    cout << max(cs,cf);
};


int32_t main() {
	fastIO;
	cin >> T;
	for(int t=1; t<=T; ++t) {
		// cout << "Case #" << t << ": ";
		solve();
        cout << endl;
	}
	return 0;
}