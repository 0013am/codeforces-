#include <bits/stdc++.h>
using namespace std;

void go(char* s,int i,int last,char* o,int n){
      if(s[i]=='\0'){
                    o[n]='\0';
              cout<<o;
          return ;
      }
      if(s[i]=='0' && last==1){
         o[i]='0';
          go(s,i+1,0,o,n);
      }
      else if(s[i]=='0' && last==2){
          o[i]='1';
          go(s,i+1,1,o,n);
      }
      else if(s[i]=='0' && last==0){
          o[i]='1';
          go(s,i+1,1,o,n);
      }
      else if(s[i]=='1' && last==1){
          o[i]='1';
          go(s,i+1,2,o,n);
      }
      else if(s[i]=='1' && last==0){
          o[i]='1';
          go(s,i+1,2,o,n);
      }
      else if(s[i]=='1' && last==2){
                    o[i]='0';
                    go(s,i+1,1,o,n);
      }
}
int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char s[n],o[n];
        cin>>s;
        go(s,0,0,o,n);
        cout<<endl;
    }
}

