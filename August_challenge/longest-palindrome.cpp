// https://leetcode.com/problems/longest-palindrome/discuss/793146/C%2B%2B-Map-with-explanation
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        int even=0,odd=0;
        for(int j=0;j<s.size();j++)
            m[s[j]]++;
        
        for(auto i:m)
        {
            if(i.second%2==0)
                even+=i.second;
            else
            {
                even+=i.second-1;
                odd=1;
            }
        }
        return even+odd;
    }
};