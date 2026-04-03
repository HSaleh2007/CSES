#include <bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MOD 1000000007

#pragma GCC optimize("O3,inline")

int mex(vector<int>&a){
    int n=a.size();
    map<int,int>mp;
    for(auto i:a)mp[i]++;
    int ans=0LL;
    for(int i=0;i<=n;i++){
        if(mp[i]==0){
            ans=i;
            break
        }
    }
    return ans;
}

void solve(){
    //first row is always 0,1,2,3,4,..,n
    //first column is always 0,1,2,3,...,n
    //construct based on that
    int n;cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        a[0][i]=i;
        a[i][0]=i;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            vector<int>cur;
            for(int k=0;k<i;k++)cur.push_back(a[k][j]);
            for(int k=0;k<j;k++)cur.push_back(a[i][k]);
            a[i][j]=mex(cur);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
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
