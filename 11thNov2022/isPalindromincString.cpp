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

bool isPalindrom( string s)
{

    int n=s.size();
    for( int i=0; i< n; i++)
    {
        if( s[i]!=s[n-1-i])
        {
            return false;
        }
    }
    return true;

}


bool isPalindrom2( string s)
{
    string temp= s;
    reverse( temp.begin(), temp.end());
    return temp==s ? true : false;
}



 
void solve(){
 
 string s;
 cin>>s;

 if( isPalindrom2(s))cout<<"this is a palindromic string"<<endl;
 else cout<<"it is not a palindromic string"<<endl;

 
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