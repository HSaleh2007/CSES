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
    map<int,int>mp;
    for(int i=0;i<n-1;i++){
        int x;cin>>x;
        mp[x]++;
    }
    for(int i=1;i<=n;i++){
        if(mp[i]==0)cout<<i;
    }
}
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    while(t--)
        solve();
}
