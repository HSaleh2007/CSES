#include <bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MOD 1000000007

#pragma GCC optimize("O3,inline")

int n;
vector<int>a(20);
int ans=1e9;

void re(int idx,int x,int y){
    if(idx==n){
        ans=min(ans,abs(x-y));
        return;
    }
    re(idx+1,x,y+a[idx+1]);
    re(idx+1,x+a[idx+1],y);
}
void solve(){
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++)cin>>a[i];
    re(0,a[0],0);
    re(0,0,a[0]);
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
