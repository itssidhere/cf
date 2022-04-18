#include <bits/stdc++.h>  
 
using namespace std;
 
using ll = long long;
void fast_cin(){ cin.tie(0); ios::sync_with_stdio(false); }
#define all(x) (x).begin(), (x).end()
 
const int MOD = (int) 1e9 + 7;
 
int main()
{
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        ll n,a,b; cin >> n >> a >> b;
        vector<ll> k(n+1) ,p(n+1);
        for(int i = 1 ; i <= n ; i++) cin >> k[i];
        partial_sum(k.begin(), k.end() , p.begin());
        ll cost = LONG_LONG_MAX;
        
        for(int i = 0 ; i <= n ; i++){
            cost=min(cost,(a+b)*(k[i]-k[0])+b*(p[n]-p[i]-(n-i)*k[i]));
        }

        cout<<cost<<endl;
        
    }
    return 0;
}
