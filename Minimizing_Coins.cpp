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
#define all(m,it) for(auto it=m.begin();it!=m.end();it++)

using namespace std;
ll dp[1000001];

ll solve(ll n,ll a[],ll sum)
{
    f(i,n)
    {
        dp[a[i]]=1;    
    }
    dp[0]=0;

    for(int i = 1;i<=sum;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(i-a[j] <= 0)
            {
                continue;
            }
            dp[i] = min(dp[i-a[j]] + 1 , dp[i]) ;
        }
    }
    if(dp[sum]>sum)
        return -1;

    return dp[sum];
}
int main()
{
        fast_io;

        memset(dp,1000001,sizeof(dp) );
        
        ll n,x;
        cin>>n>>x;
        ll mini = INT8_MAX;
        ll a[n];
        f(i,n)
        {
            cin>>a[i];
            mini=min(mini,a[i]);
        }
        
        
        cout<<solve(n,a,x);

}
