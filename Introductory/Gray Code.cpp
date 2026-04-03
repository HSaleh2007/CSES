#include <bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MOD 1000000007
 
#pragma GCC optimize("O3,inline")
 
map<string,int>mp;
vector<string>ans;
 
void re(int n,string s){
    int done=0LL;
    for(int i=0;i<n;i++){
        string t=s;
        if(t[i]!='1')t[i]='1';
        else t[i]='0';
        if(mp[t]==0){
            ans.push_back(t);
            mp[t]=1;
            done=1;
            if(ans.size()<pow(2,n))re(n,t);
        }
        if(done==1){
            break;
        }
    }
}
void solve(){
    int n;cin>>n;
    string s;
    for(int i=0;i<n;i++)s+='0';
    mp[s]=1;
    ans.push_back(s);
    re(n,s);
    for(auto i:ans){
        cout<<i<<"\n";
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
