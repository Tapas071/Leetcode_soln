//-----Author - Tapas Mondal-------
#include<bits/stdc++.h>
using namespace std;
 
 
#define int             long long
#define pb              push_back
#define ppb             pop_back
#define pf              push_front
#define ppf             pop_front
#define all(x)          (x).begin(),(x).end()
#define uniq(v)         (v).erase(unique(all(v)),(v).end())
#define sz(x)           (int)((x).size())
#define ff              first
#define ss              second
#define pii             pair<int, int>
#define rep(i,a,b)      for(int i =a;i<b;i++)
#define mem1(a)         memset(a,-1,sizeof(a))
#define mem0(a)         memset(a,0,sizeof(a))
#define ppc             __builtin_popcount
#define ppcll           __builtin_popcountll
 
typedef vector<int>vi;
typedef vector<string>vs;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
const long long  INF=1e18;
const int32_t    M=1e9+7;
const int32_t    MM=998244353;
 
// Code begins from here->

int maxIceCream(vector<int>& costs, int coins) {
        sort( costs.begin(), costs.end());
        int ans=0;
        for( int i =0; i< costs.size(); i++)
        {
            if( coins>= costs[i])
            {
                ans++;
                coins-=costs[i];
            }
            else{
                break;
            }
        }
        return ans;
    }

 
void solve(){
 

 
}
 
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
cin>>t;
while(t--)
{
 
solve();
 
}
return 0;
}