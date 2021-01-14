#include <bits/stdc++.h>
using namespace std;
int main() {
   int t; cin>>t;
   while(t--){
       string s; cin>>s;
       int x=s.size();
       if(s[0]==')' || s[x-1]=='('|| x%2==1){
           cout<<"NO"<<endl;
       }else{
           cout<<"YES"<<endl;
       }
   }
   return 0;
}