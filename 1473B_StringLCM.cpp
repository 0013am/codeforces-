#include<bits/stdc++.h>
using namespace std;
int lcm_c(int a,int b){
    return (a*b)/__gcd(a,b);
}
int main(){
    int t; cin>>t;
    while(t--){
        string s,t,x="",y="";
        cin>>s>>t;
        int sl=s.length();
        int tl=t.length();
        int lcm=lcm_c(sl,tl);
            for(int i=0;i<(lcm/sl);i++){
                x+=s;
            }
            for(int i=0;i<(lcm/tl);i++){
                y+=t;
            }
            if(x==y){
                cout<<x<<"\n";
            }
            else{
                cout<<"-1"<<"\n";
            }
        }    
}