#include <bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MOD 998244353
 
#pragma GCC optimize("O3,inline")
 
void solve(){
    int n;cin>>n;
    vector<int>ans={n};
    while(n!=1){
        if(n%2==0)n/=2;
        else{n*=3;n++;}
        ans.push_back(n);
    }
    for(auto i:ans)cout<<i<<" ";
}
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    while(t--)
        solve();
}
