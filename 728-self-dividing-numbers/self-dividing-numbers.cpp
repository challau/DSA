class Solution {
public:
      bool isSelfDividing(int n){
        int temp = n;
        while(temp > 0){
            int digits = temp % 10;
            if(digits == 0 || n % digits != 0)
                 return false;
            temp /= 10;
        }
        return true;
      }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left; i<=right;i++){
            if(isSelfDividing(i)){
                result.push_back(i);
            }
        }
        return result;
    }
};