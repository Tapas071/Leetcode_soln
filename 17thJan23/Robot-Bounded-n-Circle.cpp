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
/* 
date of submission 18th jan 2023
question link - https://leetcode.com/problems/robot-bounded-in-circle/submissions/880123464/ 

*/

bool isRobotBounded(string ss) {
    string i ;
    for( int j =0; j< 4; j++) i += ss;
        int n=0, s=0 , e=0 , w =0;
        bool isN=true, isS = false , isE=false, isW=false;

        for( auto x : i){
            if(x=='G'){
                if(isN)n++;
                else if(isS)s++;
                else if(isE)e++;
                else if(isW)w++;
            }
            else if( x=='L'){

                 if(isN){
                    isN=false;
                    isW=true;
                 }
                else if(isE)
                {
                    isE=false;
                    isN=true;
                }
                else if(isS){
                    isS=false;
                    isE=true;
                }
                else if(isW){
                    isW=false;
                    isS=true;
                }
            }
            else if( x=='R'){

                 if(isN){
                    isN=false;
                    isE=true;
                 }
                else if(isE)
                {
                    isE=false;
                    isS=true;
                }
                else if(isS){
                    isS=false;
                    isW=true;
                }
                else if(isW){
                    isW=false;
                    isN=true;
                }
            }

        }
        return (n==s) and (e==w);
        
    }


 
void solve(){
    string s = "GG";

    if(isRobotBounded(s))cout<<"Yess"<<endl;
    else cout<<"NO"<<endl;
 

 
}
 
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t=1;
// cin>>t
while(t--)
{
 
solve();
 
}
return 0;
}