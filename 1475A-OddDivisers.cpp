#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void go(){
        ll n;
        cin>>n;
        for(ll i=1;i<=60;i++){
            if((1LL<<i)==n){
                cout<<"NO"<<"\n";
                return;
            }
        }
        cout<<"YES"<<"\n";
    }
int main() {
    int t; cin>>t;
    while(t--){
        go();
    }     
}
