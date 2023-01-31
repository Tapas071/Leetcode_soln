#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int ans = 0;

    //  [4,5,6,5],
    // ages = [2,1,2,1]

    bool isConflict(vector<pair<int, int>> temp)
    {
        sort(temp.begin(), temp.end());

        unordered_map<int, int> m;
        for (auto x : temp)
        {
            if (m.find(x.first) == m.end())
            {
                m[x.first] = x.second;
            }
            else
            {

                if (m[x.first] < x.second)
                    return false;
            }
        }

        return true;

        // for( int i =0; i< temp.size(); i++)
        // {

        //     m[temp[i]]

        // }
    }

    void recur(vector<int> &scores, vector<int> &ages, int i, vector<pair<int, int>> temp)
    {
        // base case
        int n = scores.size();
        if (i > n - 1)
        {
            return;
        }
        if (!isConflict(temp))
        {
            return;
        }
        // int tempAns = accumulate( temp.begin().first, temp.end().first, 0); // there may be some mistake
        int tempAns = 0;
        // cout<<temp.size()<<endl;

        //  cout<<"showing temp ";
        for (int i = 0; i < temp.size(); i++)
        {
            // cout<<temp[i].second<<endl;
            // cout<< temp[i].first<<"  " << temp[i].second <<"   ";

            tempAns += temp[i].second;
        }
        // cout<<endl;

        ans = max(ans, tempAns);
        // cout<< ans<<endl;

        // pick

        recur(scores, ages, i + 1, temp);
        temp.push_back({ages[i], scores[i]});

        cout << " pushing " << ages[i] << "-->" << scores[i] << endl;

        // non picking stuff

        recur(scores, ages, i + 1, temp);
        temp.pop_back();
    }

    int bestTeamScore(vector<int> &scores, vector<int> &ages)
    {
        vector<pair<int, int>> temp;

        recur(scores, ages, 0, temp);

        return ans;
    }
};

// another approach

class Solution
{
public:
    int bestTeamScore(vector<int> &scores, vector<int> &ages)
    {
        int n = scores.size(), ans = 0;

        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {

            v.push_back({ages[i], scores[i]});
        }
        sort(v.begin(), v.end());

        vector<int> dp(n, 0);

        for (int i = 0; i < n; i++)
        {
            dp[i] = v[i].second;
            for (int j = 0; j < i; j++)
            {

                if (v[i].second >= v[j].second)
                {
                    dp[i] = max(dp[j] + v[i].second, dp[i]);
                }
            }
            ans = max(ans, dp[i]);
        }

        return ans;
    }
};
