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

  int subarraysDivByK(vector<int>& nums, int k) {

        
        int sum =0, ans=0, n= nums.size();
        vector<int> pre(n+1);
        pre.push_back(0);
        for( auto x :nums){
            sum+=x;
            // if(x%k==0)ans++;
            pre.push_back(sum);
        }
        //calcalutin for windwo size of 2

        for( int  i =1; i<= n ; i++){

        
            int l=0, r =i;
            while( r!=n+1)
            {
                if( (pre[r]-pre[l])%k==0)ans++;

                l++, r++;
            }
        }
        return ans;
    }

    // another approach 

      int subarraysDivByK(vector<int>& nums, int k) {
        // initiating a map
        map<int, int> m;
        m[0]=1;
        int ans =0, sum =0;

        for( auto x : nums)
        {
            // counting the prefix 
            sum= (sum + (x%k) + k )%k;
            ans+= m[sum];
            m[sum]++;
        }
        return ans;
        
    }
