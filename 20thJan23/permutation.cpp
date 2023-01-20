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
vector<vector< int>> ans;
void helper(vector<int>& nums , vector<int> &ds ,int i , int n )
{
    if( ds.size()==n)
    {
        ans.push_back( ds);
        return ;
    }
    ds.push_back(nums[i]);
    helper( nums, ds, i+1, n);
    ds.pop_back();
    swap( nums[i] , nums[i-1]);
    helper( nums ,ds, i+1, n );


}

vector<vector<int>> permute(vector<int>& nums) {
    
        int n = nums.size();
        vector<int> ds;
            helper( nums, ds , 0, n);



    return ans;    
    }
 
void solve(){
    vector<int>nums ={1,2,3,4};
    vector<vector< int>> ans = permute(nums);

    for( int i =0; i< ans.size(); i++)
    {
        for( int j =0; j< ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
 

 
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