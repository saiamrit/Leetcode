class Solution {
public:
    bool isPowerOfFour(int num) {
        bool res = true;
        if (num ==0){
            res = false;
            return res;
        }
        while(num != 1){
            if (num%4 == 0){
                num = num/4;
            } 
            else{
                res= false;
                break;
            }
        }
        return res;
    }
};