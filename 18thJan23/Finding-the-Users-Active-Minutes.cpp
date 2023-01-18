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

/*
This Question has done on 18th Jan 

question link - https://leetcode.com/problems/finding-the-users-active-minutes/submissions/880630588/

this was a really good question.

*/



vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
    map<int, set<int> > m;
    map<int, int> m2;
    for( auto x :logs)
    {
        m[x[0]].insert(x[1]);
    }
    for( auto x : m)
    {
        int uam;

        int val = x.first;
        set<int> s = x.second;
        int size = s.size();
        m2[size]++;
    }
    vector<int>ans;
    for( int i =1 ; i<=k ; i++)
    {
        ans.push_back(m2[i]);


    }
    return ans; 
        
        
    }