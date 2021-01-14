#include <bits/stdc++.h>
using namespace std;
bool go(int *a,int n,int d){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]>d){
            cnt=1;
            break;
        }
    }
    if(cnt==0){
        return true;
    }
    sort(a,a+n);
    if(a[0]+a[1]>d){
        return false;
    }
    return true;
}
int main() {
   int t; cin>>t;
   while(t--){
       int n,d; cin>>n>>d;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       if(go(a,n,d)){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
   }
}
