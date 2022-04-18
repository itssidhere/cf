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
    int n; cin >> n;
    while(n--){
        int t,r,b; cin >> t >> r >> b;
        string s;
            int j = r/(b+1);
            r-=(j * (b+1));
            for(int i = 0 ; i <= b  ; i++){
                string x(j,'R');
                cout<<x;
                if(r-->0) cout<<'R';
                if(i < b ) cout<<'B';

            }
        
        cout<<endl;
        
    }
    return 0;
}
