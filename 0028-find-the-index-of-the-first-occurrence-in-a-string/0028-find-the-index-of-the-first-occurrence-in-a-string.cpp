class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.length() < needle.length()) {
            return -1;
        }
        
        /*for (int i = 0; i <= haystack.length() - needle.length(); i++) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }*/

        for(int i = 0; i <= haystack.length() - needle.length(); i++)
        {
            if(haystack[i]==needle[0])
            {
                int k =0;
                int flag = i + needle.size() - 1;
                for(int j=i; j<=flag; j++)
                {
                    if(k==needle.size()-1 && haystack[j]==needle[k])
                    {
                        return i;
                    }
                    else if(haystack[j]!=needle[k])
                    {
                        break;
                    }
                    k++;
                }
            }
        }
        
        return -1;
    }
};