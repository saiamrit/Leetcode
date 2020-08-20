//   https://leetcode.com/problems/non-overlapping-intervals/discuss/796842/C%2B%2B-simple-sorting-approach

class Solution {
public:
    bool sort2nd(vector<int> a, vector<int> b){
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& v) {
        if (v.size()==0) return 0;
        
        sort(begin(v), end(v), sort2nd);
        
        int count = 0, l = v[0][1];
        for (auto e: v) {
            
            if (e[0] < lmt) {
                count++;
            } else {
                
                lmt = e[1];
            }
        }
        return limit-1;
    }
};