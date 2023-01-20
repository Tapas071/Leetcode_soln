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

set<vector<int>>s;
void subsequnce(vector<int>& nums, vector<int>&ds , int i , int n)
{
    // cout<<2<<endl;
    if( i == n )
    {
        if( ds.size()>1)
        {
            s.insert( ds);
        }
        return ;

    }
    ds.push_back(nums[i]);
    subsequnce(nums,ds, i+1, n);
    ds.pop_back();
    subsequnce( nums , ds, i+1, n);

}

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        
         vector<vector<int>> ans;

        //  priting all subswquence 
        int n = nums.size();
        vector<int> ds;
        subsequnce(nums, ds, 0 , n);

        for( auto x : s)
        {
            vector<int> temp = x; 
            sort( temp.begin(), temp.end());
            if( temp ==x )
            {
                ans.push_back(x);
            }
        }

        return ans;
    }




 
void solve(){

    // vector< int> arr= {1, 3, 5 , 3};
    vector< int> arr= {4,6,7,7};
        vector<vector<int>> ans = findSubsequences( arr);

        for( int i =0; i< ans.size(); i++)
        {
            for( int j=0; j< ans[i].size(); j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }


    // // vector<int> arr(8);
    // cout<<10<<endl;
    // vector<int> ds;
    // int n = arr.size();
    // subsequnce(arr, ds,0,n);
    // cout<<9<<endl;

    // for( auto x : s)
    // {
    //     cout<<"new one-->";
    //     for( int i =0; i< x.size(); i++)
    //     {
    //         cout<<x[i]<<" ";
    //     }
    //     cout<< endl;;

    // }
    

   

 

 
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


//------------------------------------

vector<vector<int>> findSubsequences2(vector<int>& nums) {
        vector<vector<int>>ans;
        int n= nums.size();
        if( n==1)return ans;
        // temp.push_back(nums[0]);
        for( int i =0; i< n-1; i++)
        {
        vector<int> temp;
        int size=2;
            temp.push_back(nums[i]);
           int j =i;
           while( j<n-1)
           {
                        if( nums[j]<=nums[j+1])
                    {
                        temp.push_back(nums[j+1]);
                        if( temp.size()==size)
                        {
                            ans.push_back(temp);
                            // temp.clear();
                            size++;
                        }
                        j++;

                    }
                    else
                    {
                        temp.clear();
                        size=2;
                        break;
                    }
                    
           }
        }
        return ans;
    }

