#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void go(){
        ll n;
        cin>>n;
        for(ll i=0;i<=1000;i++){
            ll x=n-(2020*i);
            if(x<0) break;
            if(x%2021==0){
                cout<<"YES"<<"\n";
                return;
            }
        }
        cout<<"NO"<<"\n";
    }
int main() {
   int t; cin>>t;
   while(t--){
       go();
   }
}
