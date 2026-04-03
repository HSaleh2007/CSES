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
    vector<int>a(n);
    int ans=0LL;
    for(auto &i:a)cin>>i;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            ans+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout<<ans;
}
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    while(t--)
        solve();
}
