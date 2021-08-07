//        _   __  _____ 
//       | | / / /  __ \
//       | |/ /  | /  \/
//       |    \  | |    
//       | |\  \ | \__/\
//       \_| \_/  \____/
// 

#include <bits/stdc++.h>

#define f(i, n) for (long long i = 0; i < n; i++)
#define f1(i, n) for (long long i = 1; i <= n; i++)
#define fo(i, a, b) for (long long i = a; i < b; i++)
#define b(i, n) for (long long i = n - 1; i >= 0; i--)
#define b1(i, n) for (long long i = n; i >= 1; i--)
#define bo(i, a, b) for (long long i = a - 1; i >= b; i--)
#define ceild(a, b) ((a) / (b) + ((a) % (b) != 0))
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define print(x) cout << (x) << '\n'
#define endl "\n"
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define ff first
#define ss second
#define umap unordered_map
#define INF (9223372034707292159ll)
typedef unsigned long long ull;
typedef long long int ll;
#define pii pair<ll,ll>
#define mii map<ll,ll>
#define vi vector<ll> 
#define si set<ll> 
#define uset unordered_set
#define mset multiset
#define array(a,n) ll a[n]; f(i,n) cin>>a[i];
#define all(m,it) for(auto it=m.begin();it!=m.end();it++)
#define test ll TC; cin>>TC; while(TC--)
using namespace std;

// EVERY SINGLE QUES TAKES YOU TOWARDS YOUR GOAL :) 
vi edge[10001];
ll vis[10001];
ll dis[10001];

void bfs(ll source)
{
    queue<ll>q;
    q.push(source);


    vis[source]=1;

    dis[source]=0;

    while(!q.empty())
    {
        ll curr = q.front();
        q.pop();
        for(ll child:edge[curr])
        {
            if(!vis[child])
            {
                q.push(child);
                dis[child] = dis[curr]+1;
                vis[child] = 1;
            }
        }
        
    
    }




}


int main()
{
        fast_io;

    


        test
        {

            
            ll n,e; 
            cin>>n>>e;

            f(i,n+1)
            {
                edge[i].clear();
                vis[i]=0;
                dis[i]=0;
            }

            
            while(e--)
            {
                ll a,b;
                cin>>a>>b;
                edge[a].pb(b);
                edge[b].pb(a);
            }  
           

           bfs(1); // enter node from which distance

           cout<<dis[n]<<endl; // print the distance of node required
 



            
        }


        
}
