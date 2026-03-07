class Solution {
public:
    bool isPerfectSquare(long long num) {
        for(long long i = 1; i <= num; i++){
            if(num == (i*i)){
                return true;
            }
            
        }
        return false;
    }
};