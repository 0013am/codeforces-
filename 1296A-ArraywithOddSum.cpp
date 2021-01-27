#include <bits/stdc++.h>
using namespace std;
int main() {
   int t; cin>>t;
   while(t--){
       int n; cin>>n;
       int a[n];
       bool e=0,o=0;
       int sum=0;
       for(int i=0;i<n;i++){
           cin>>a[i];
           sum+=a[i];
           e|=a[i]%2==0;
           o|=a[i]%2!=0;
       }
       if(sum%2!=0 || (e && o) ){
           cout<<"YES"<<endl;
       }else{
           cout<<"NO"<<endl;
           }
   }
}
