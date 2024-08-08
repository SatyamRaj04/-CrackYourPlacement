class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mpp = {{')', '('}, {']', '['}, {'}', '{'}};

        /*for (char c : s) {
            if (mpp.find(c) == mpp.end()) {
                st.push(c);
            } else if (!st.empty() && mpp [c] == st.top()) {
                st.pop();
            } else {
                return false;
            }
        }*/

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==')' || s[i]=='}' || s[i]==']')
            {
                if(st.empty()) return false;
                char c = st.top();
                st.pop();
                if((s[i]==')' && c=='(') || (s[i]=='}' && c=='{') || (s[i]==']' && c=='[')) continue;
                else return false;
            }
        }
        return st.empty();
    }
};