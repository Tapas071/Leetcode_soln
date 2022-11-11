// question link -- https://leetcode.com/problems/longest-substring-without-repeating-characters/description/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(!s.size())return 0;
        set<char>st;
        int i=0,j=0,ans=INT_MIN;
        while( j<s.size())
        {

            if( st.count(s[j])==0)
            {
                st.insert(s[j]);
                ans=max(ans,(int)st.size());
                j++;
            }
            else
            {
                st.erase(s[i]);
                i++;
            }
        }
        return ans;
        
    }
};