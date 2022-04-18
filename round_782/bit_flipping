//https://codeforces.com/contest/1659/problem/B
//BIT FLIPPING

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
        int n,k; cin >> n >> k;
        string s; cin >> s;
        vector<int> moves(n);
        int kk = k;
        for(int i = 0 ; i < n; i++){
            int b = ((s[i] - '0') + (kk - k) ) % 2;
            if(k == 0){
                s[i] = '0'+ b;
                continue;
            }
            if(i  == n-1){
                s[i]=('0'+ b);
                moves[i]+=k;
                k = 0;
                continue;
            }else{
                
            if(k&1 && b == 1){
                moves[i]++;
                s[i] = '0'+ b;
                k--;
            }else if(k%2==0 && b==0){
                moves[i]++;
                s[i] = '1';
                k--;
            }else{
                s[i] = '0'+ ((b + k) % 2);
             }
            }
        }
        cout<<s<<endl;
        for(auto x : moves){
            cout<<x<<" ";
        }
        cout<<endl;
    }   
    return 0;
}
