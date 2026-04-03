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
    if(n==1){
        cout<<"1\n";
        return;
    }
    if(n==4){
        cout<<"3 1 4 2\n";
        return;
    }
    if(n<=3){
        cout<<"NO SOLUTION";
    }else{
        vector<int>ans;
        if(n&1)ans.push_back((n+1)/2);
        for(int j=n;j>=n-n/2+1;j--){
            ans.push_back(j);
            ans.push_back(n-j+1);
        }
        if(abs(ans[n-1]-ans[n-2])==1){
            swap(ans[n-1],ans[0]);
        }
        for(auto i:ans)cout<<i<<" ";
        cout<<"\n";
    }
}
 
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t=1;
    while(t--)
        solve();
}
