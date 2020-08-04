// https://leetcode.com/problems/valid-palindrome/discuss/772889/c-solution-with-explanation

class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size()==0)
            return true;
        string res="";
        for(char c : s)
        {
            if(c>='A' && c<='Z')
                res+=(c-'A'+'a');
            else if(c>='a' && c<='z')
                res+=c;
            else if(c>='0' && c<='9')
                res+=c;
        }
        string rev = res;
        reverse(res.begin(),res.end());
        return rev==res;
    }
};