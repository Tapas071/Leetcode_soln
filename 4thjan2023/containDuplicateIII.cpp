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

// class Solution {
// public:

    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        vector<pair< int,int>> a;

        for( int i=0; i< nums.size();i++)
        {
            pair<int,int> p = make_pair(nums[i], i);
            a.push_back(p);
        }
        
        sort(a.begin(), a.end());

        // for ( int i = 0; i< a.size(); i++)
        // {

        //     cout<<a[i].first<<" --> "<<a[i].second<<endl;

        // }

        for( int i =1;i< a.size(); i++)
        {
            if( abs((a[i-1].first - a[i].first))<=valueDiff){
                if( abs((a[i-1].second - a[i].second))<=indexDiff)return true;   
            }
        }
        return false;
    }
// };




 
void solve(){
 
 vector<int> a= {1,3,6,2};
 cout<<containsNearbyAlmostDuplicate(a, 1,2)<<endl;

 
}
 
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
// cin>>t;
while(t--)
{
 
solve();
 
}
return 0;
}