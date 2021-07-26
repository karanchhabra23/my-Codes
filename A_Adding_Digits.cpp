#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)
#define b(i,a,b) for(int i=a;i>b;i--)
#define ll long long 
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll a,b,n;
    cin>>a>>b>>n;
    int flag = 0;
    a*=10;
    f(i,0,10)
    {
        if((a+i)%b == 0)
        {
            a = a + i;
            n--;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<a;
        while(n--)
        {
            cout<<"0";
        }
    }
}