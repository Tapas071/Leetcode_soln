#include <bits/stdc++.h>
using namespace std;

// this problem is unsolved 

// approach one -- tle

class Solution
{
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize)
    {

        int ans = 0, size = minSize;
        unordered_map<string, int> m;
        vector<string> v;

        while (size <= maxSize)
        {

            for (int i = 0; i < s.size() - size + 1; i++)
            {
                string ss = s.substr(i, size);
                v.push_back(ss);
            }
            size++;
        }

        for (auto x : v)
        {

            // unique character
            set<char> st;
            string str = x;

            cout << str << endl;
            for (int i = 0; i < str.size(); i++)
            {
                st.insert(str[i]);
            }

            if (st.size() <= maxLetters)
            {
                m[x]++;
            }
        }

        for (auto x : m)
        {
            ans = max(ans, x.second);
        }

        return ans;
    }
};

// apprach two

bool isUnique(string s, int maxLetters)
{
    // unordered_map<char, int> m;
    set<char> m;
    for (auto x : s)
    {
        m.insert(x);
    }

    return m.size() <= maxLetters;
}

int maxFreq(string s, int maxLetters, int minSize, int maxSize)
{
    int ans = 0;
    unordered_map<string, int> m;

   
    while (minSize <= maxSize)
    {
        for (int i = 0; i < s.size() - minSize + 1; i++)
        {
            string ss = s.substr(i, minSize);
            cout << ss << endl;

            if (isUnique(ss, maxLetters))
            {
                m[ss]++;
            }
        }
        minSize++;
    }

    cout << m.size() << endl;

    for (auto x : m)
    {

        ans = max(ans, x.second);
    }
    return ans;
}

int main()
{

    string s = "aaaa";
    int ml = 1, mns = 3, mxs = 3;

    cout << "final ans --> " << maxFreq(s, ml, mns, mxs) << endl;

    return 0;
}