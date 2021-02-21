#include<bits/stdc++.h>
using namespace std;
vector<int>g[100000];
int ind[100000];
int vis[10000];
vector<int>out;
void bfs(int src,int n){
  for(int i=1;i<=n;i++) {
      vis[i]=0;
  }
  priority_queue<int,vector<int>,greater<int>>pq;
  pq.push(src);
  vis[src]=1;
  while(!pq.empty()){
    int t=pq.top();
    out.push_back(t);
    pq.pop();
    for(auto p:g[t]){
     
      if(vis[p]==false){
        pq.push(p);
       vis[p]=true;
      }
    }
  }
}
int main(){
  int n,m; cin>>n>>m;
  for(int i=0;i<m;i++){
    int a,b; cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
    ind[b]++;
    
  }
  bfs(1,n);
  for(auto x:out){
    cout<<x<<" ";
  }
}
