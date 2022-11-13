Question link --https://leetcode.com/problems/reverse-words-in-a-string/submissions/842472972/


solution ---

class Solution {
public:
    string reverseWords(string s) {
        // vector<int>st;
        stack<string>st;
        string temp;
        string ans;

        for( int i=0; i< s.size(); i++)
        {
            if(s[i]==' ')
            {
                if( temp.size()!=0)
                {
                    st.push(temp);
                    temp.clear();
                }
            }
            else
            {
                temp+=s[i];
            }
        }
        if(s[s.size()-1]!=' ')
        {
            st.push(temp);
            temp.clear();

        }

        while( !st.empty())
        {
            ans+=st.top();
            st.pop();
            ans+=' ';
        }

        ans.pop_back();

        return ans;
        
    }
};


