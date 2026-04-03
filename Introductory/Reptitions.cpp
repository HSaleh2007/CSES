#include <bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MOD 998244353
 
#pragma GCC optimize("O3,inline")
 
void solve(){
    string s;cin>>s;
    char chr=s[0];
    int len=1;
    int ans=0LL;
    int n=s.size();
    for(int i=1;i<n;i++){
        if(s[i]==chr){
            len++;
        }else{
            ans=max(ans,len);
            chr=s[i];
            len=1;
        }
    }
    ans=max(ans,len);
    cout<<ans;
}
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    while(t--)
        solve();
}
