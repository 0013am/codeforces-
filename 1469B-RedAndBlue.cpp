#include <bits/stdc++.h>
using namespace std;
int main() {
   int t; cin>>t;
   while(t--){
       int n;cin>>n;
       int r[n];
       int sr=0,msr=0,sb=0,msb=0;
       for(int i=0;i<n;i++){
           cin>>r[i];
           sr+=r[i];
           msr=max(sr,msr);
       }
       int m; cin>>m;
       int b[m];
       for(int i=0;i<m;i++){
           cin>>b[i];
           sb+=b[i];
           msb=max(msb,sb);
       }
       cout<<msb+msr<<endl;
   }
}