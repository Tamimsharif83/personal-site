#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,e;
    cin>>n>>e;
    vector<vector<int>>adj(n);
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int>vis(n);
    vis[0]=1;
    queue<int>q;
    q.push(0);
    while(!q.empty())
    {
        int f=q.front();
        cout<<f<<" ";
        q.pop();
        for(auto x:adj(f))
        {
            if(!vis[x])
            {
                vis[x]=1;
                q.push(x);
            }
        }

    }
}