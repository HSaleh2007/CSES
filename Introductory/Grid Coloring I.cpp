#include <bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MOD 1000000007
 
#pragma GCC optimize("O3,inline")
 
void solve(){
    int n,m;cin>>n>>m;
    char a[n][m],b[n][m];
    vector<string>patterns={"AB","AC","AD","BC","BD","CD","BA","CA","DA","CB","DB","DC"};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j+=2){
            if(j+1<m){
                for(auto k:patterns){
                    if(a[i][j]!=k[0] && a[i][j+1]!=k[1]){
                        int c1=1,c2=1;
                        if(i>0){
                            c1=(b[i-1][j]!=k[0] && b[i-1][j+1]!=k[1]);
                        }
                        if(j>0){
                            c2=(b[i][j-1]!=k[0]);
                        }
                        if(c1&&c2){
                            b[i][j]=k[0];
                            b[i][j+1]=k[1];
                            break;
                        }
                    }
                }
            }else{
                for(char c: string("ABCD")){
                    if(c==a[i][j]) continue;
                    if(i>0 && b[i-1][j]==c) continue;
                    if(j>0 && b[i][j-1]==c) continue;
                    b[i][j]=c;
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j];
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
