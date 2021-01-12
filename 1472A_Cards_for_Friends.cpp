#include <bits/stdc++.h>
using namespace std;
#define int long long
int go(int w,int h){
    if(w%2==1 && h%2==1){
        return 0;
    }
    if(w&1){
        return 1+2*go(w,h/2);
    }
    return 1+2*go(w/2,h);
}
int32_t main() {
   int t; cin>>t;
   while(t--){
       int w,h,n;
       cin>>w>>h>>n;
      int x=1;
       x+=go(w,h);
 
       if(x>=n){
           cout<<"yes"<<endl;
       }else{
           cout<<"no"<<endl;
       }
   }
}