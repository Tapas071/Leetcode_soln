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

void showVector( vector<vector<int>> a)
{

    int n =a.size();
    for ( int i=0; i<n; i++)
    {
        for( int j=0; j<a[i].size(); j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


bool static cmp(vector<int> &a ,vector<int> &b)
{
    // return a[1]<=b[1];
    if( a[0]<b[0])
    {
        return a[1]>=b[1];
    }
    else if( a[0]==b[0])
    {
        return a[1]>=b[1];
    }
    return a[0]<b[0];
}
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort( intervals.begin(), intervals.end(), cmp);
        showVector(intervals);
        vector<vector<int>>ans;
        if( intervals.size()==1)return intervals;
        vector<int> temp;
        // int ct=0;
        int bg=0;
        temp.push_back(intervals[0][0]);
            
            bg=intervals[1][1];
            // ct=1;

        for( int i =1; i< intervals.size(); i++)
        {
            
            if(intervals[i][0]>bg)
            {
                // temp.push_back(intervals[i-1][1]);

                if( bg < intervals[i][1])
                {
                    bg= intervals[i][1];
                }
                ans.push_back(temp);
                temp.clear();
                temp.push_back(intervals[i][0]);
                bg=intervals[i][1];
            }
            



        }
        temp.push_back(intervals[intervals.size()-1][1]);
            ans.push_back(temp);
            return ans;


        
    }





 
void solve(){
    vector<vector<int> >v;
    v.push_back({1,4});
     v.push_back({4,5});
    // v.push_back({8,10});
    // v.push_back({15,18});
    merge( v);

 

 
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