#include <bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MOD 1000000007

#pragma GCC optimize("O3,inline")

void solve(){
    int n;cin>>n;
    int ans=1LL;
    for(int i=1;i<=n;i++){
        ans*=2;
        if(ans>=MOD)ans-=MOD; // this works because *2 only
    }
    cout<<ans;
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--){
        solve();
    }
}
