#include<bits/stdc++.h>
using namespace std;
map<int,list<int>> g;
int main(){
    int t;
    cin>>t;
    while(t--){
    g.clear();
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int cnt[n]={0};
    for(int i=0;i<n;i++)cnt[i]=g[i].size();
    int k=0;
    int out=-1;
    if(m%2==0)k=1;
    else {
    k=2;
    for(int i=0;i<n;i++)if(cnt[i]%2==1){out=i;break;}
    }
    if(k==1){
        cout<<1<<endl;
        for(int i=0;i<n;i++)cout<<1<<" ";
    }
    else {
        cout<<k<<endl;
        for(int i=0;i<n;i++){
            if(out==i)cout<<2<<" ";
            else cout<<1<<" ";
        }
    }
    cout<<endl;
    }
    return 0;
}
