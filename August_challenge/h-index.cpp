class Solution {
public:
    int hIndex(vector<int>& cit) {
        
        sort(cit.begin(),cit.end());
        
        //int lar=0;
        for(int i=0;i<cit.size();i++)
        {
            if((cit.size()-i)<=cit[i])
                return cit.size()-i;
        }
        return 0;
    }
};