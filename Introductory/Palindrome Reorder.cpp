#include <bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MOD 1000000007

#pragma GCC optimize("O3,inline")

void solve(){
    string s;cin>>s;
    map<char,int>mp;
    for(auto i:s)mp[i]++;
    int n=s.size();
    int odd=0LL;
    char c='a';
    for(auto i:mp){
        if(i.second%2==1){
            odd++;
            c=i.first;
        }
    }
    if(odd==1)odd=0;
    if(odd!=0){
        cout<<"NO SOLUTION";
        return;
    }
    string ans;
    for(auto i:mp){
        for(int j=0;j<i.second/2;j++){
            ans+=i.first;
        }
    }
    string ans2=ans;
    reverse(ans2.begin(),ans2.end());
    cout<<ans;
    if(c!='a')cout<<c;
    cout<<ans2;

}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    while(t--){
        solve();
    }
}
