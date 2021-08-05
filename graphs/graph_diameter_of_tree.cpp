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
ll visited[10001];
vi edge[10001];
ll dis[10001];

void dfs(ll node, ll distance)
{
    visited[node]=1;
    dis[node]=distance;

    for(ll child:edge[node])
    {
        if(visited[child]==0)
        {
            dfs(child,distance+1);
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

        ll n,e; // n is number of node, e is number of edges

        cin>>n>>e;

        while(e--)
        {
            ll a,b;
            cin>>a>>b;
            edge[a].pb(b);
            edge[b].pb(a);
        }
        
        dfs(1,0);

        ll maxd = -1;
        ll maxi =-1;


        f1(i,n)
        {
            if(dis[i]>maxd)
            {
                maxd = dis[i];
                maxi = i;
            }
        }

        f(i,n+1)
        {
            dis[i]=0;
            visited[i]=0;
        }



        dfs(maxi,0);

        ll ansd = -1;
        ll ansi = -1;

        f1(i,n)
        {
            if(dis[i]>ansd)
            {
                ansd = dis[i];
                ansi = i;
            }
        }
        cout<<ansd<<endl;

}
