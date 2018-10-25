#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int a[1005][1005];
int dis[1005][1005];
int n,m,k,d;
struct Node
{
    int x;
    int y;
    int step;
    bool operator < (const Node b) const
    {
        return step>b.step;
    }
    Node(int x,int y,int step):x(x),y(y),step(step) {}
    Node() {}
};
bool judge(int x,int y,int step)
{
    if(x>=1&&x<=n&&y>=1&&y<=n&&a[x][y]!=-2&&(dis[x][y]==-1||step<dis[x][y]))return true;
    return false;
}
priority_queue<Node> Q;
int nx[]= {0,0,1,-1};
int ny[]= {-1,1,0,0};
void bfs()
{
    while(!Q.empty())
    {
        Node p=Q.top();
        Q.pop();
        dis[p.x][p.y]=p.step;
        for(int i=0; i<4; i++)
        {
            int x=p.x+nx[i];
            int y=p.y+ny[i];
            int step=p.step+1;
            if(judge(x,y,step))Q.push(Node(x,y,step));
        }
    }
}
int main()
{
    while(!Q.empty())Q.pop();
    memset(a,0,sizeof a);
    memset(dis,-1,sizeof dis);
    cin>>n>>m>>k>>d;
    int x,y,c;
    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        //a[x][y]=-1;
        //dis[x][y]=0;
        Q.push(Node(x,y,0));
    }
    vector<pair<int,int> > V;
    V.clear();
    for(int i=0; i<k; i++)
    {
        cin>>x>>y>>c;
        a[x][y]+=c;
        V.push_back(make_pair(x,y));
    }
    for(int i=0; i<d; i++)
    {
        cin>>x>>y;
        a[x][y]=-2;
    }
    bfs();
//    for(int i=n;i>0;i--)
//    {
//        for(int j=1;j<=n;j++)
//            cout<<dis[j][i]<<" ";
//        cout<<endl;
//    }
    sort(V.begin(),V.end());
    V.erase(unique(V.begin(),V.end()),V.end());
    long long ans=0;
    for(int i=0; i<V.size(); i++)
    {
        int x = V[i].first;
        int y = V[i].second;
        ans+=1ll*a[x][y]*dis[x][y];
    }
    //while(1);
    cout<<ans<<endl;
    return 0;
}

