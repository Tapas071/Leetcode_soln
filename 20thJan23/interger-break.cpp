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


long long ans =1;
int  helper( int n){
    
        if( n<5)return ans*n;
        else{
            ans*=3;
            helper(n-3);
        }


}

int integerBreak(int n) {
        // n = 6 .. 3*3 =9
        // n=7..3*4=12
        // n=8 ... 3*3*2=18 / 2^4=16
        if( n==2)return 1;
        if( n==3)return 2;
        if( n==4)return 4;

        return helper( n);

        
        
    }

 
void solve(){
 cout<<integerBreak(58)<<endl;

 
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
