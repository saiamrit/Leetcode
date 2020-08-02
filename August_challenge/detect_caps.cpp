// for explanation visit : https://leetcode.com/problems/detect-capital/discuss/768642/O(n)-C%2B%2B-solution
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int sum=0;
        
        for(int i=1;i<n;i++)
        {
            if(word[i]>='a')
                sum++;
        }
        if((sum==n-1) || (sum==0 && word[0]<='Z'))
            return true;
        
        else return false;
    }
};