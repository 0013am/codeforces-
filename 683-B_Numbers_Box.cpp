#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int cnt=0;int mn=INT_MAX;int ans=0;
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a;
                cin>>a;
               if(a<0){
                   cnt++;
               }
               mn=min(mn,abs(a));
               ans+=abs(a);
            }
        }
        if(cnt%2!=0){
            cout<<ans-2*mn<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
}