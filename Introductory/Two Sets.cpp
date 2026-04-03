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
    int total=(n*(n+1));
    if(total%4==0){
        cout<<"YES\n";
        int target=total/4;
        int cur=0LL;
        vector<int>a,b;
        for(int j=n;j>=1;j--){
            if(target-cur>=j){
                a.push_back(j);
                mp[j]=1;
                cur+=j;
            }
        }
        for(int i=1;i<=n;i++){
            if(mp[i]==0)b.push_back(i);
        }
        cout<<a.size()<<"\n";
        for(auto i:a)cout<<i<<" ";
        cout<<"\n"<<b.size()<<"\n";
        for(auto i:b)cout<<i<<" ";
    }else{
        cout<<"NO\n";
    }
}
 
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--){
        solve();
    }
}
