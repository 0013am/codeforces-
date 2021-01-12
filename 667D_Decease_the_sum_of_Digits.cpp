#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    ll t,k;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    cin>>k;
    ll ts=0;
    ll l=s.length();
    for(ll i=l-1;i>=0;i--){
        ts+=(s[i]-'0');
    }
       if(ts<=k){
           cout<<"0"<<endl;
           continue;
       }
       ll p=1;
       ll c=0;
       ll cnt=0;
       for(ll i=l-1;i>=0,ts>=k;i--){
           ts-=(s[i]-'0');
           ll diff=(10-(s[i]-'0')-c)%10;
            cnt+=p*diff;
            p*=10;
            if(s[i]!='0'){
                c=1;
            }
       }
       cout<<cnt<<endl;
    }
}