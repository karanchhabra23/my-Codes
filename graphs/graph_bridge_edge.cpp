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
vi edge[1001];
ll vis[1001];
ll in[1001];
ll low[1001];
ll timer;

void dfs(ll node, ll parent)
{
    vis[node]= 1;
    low[node]= in[node] = timer;
    timer++;

    for(ll child:edge[node])
    {
        if(child == parent)
            continue;
        
        if(vis[child]==1)
        {
            low[node] = min(low[node],in[child]);
        }
        else
        {
            dfs(child,node);


            if(low[child] > in[node])
            {
                cout<<node<<"->"<<child<<" is a bridge"<<endl;
            }

            low[node] = min(low[node],low[child]);
        }
        
    }
}


int main()
{
        fast_io;

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


        ll n,m;
        cin>>n>>m;

        while(m--)
        {
            ll a,b;
            cin>>a>>b;
            edge[a].pb(b);
            edge[b].pb(a);
        }

        dfs(1,-1);
        
}
