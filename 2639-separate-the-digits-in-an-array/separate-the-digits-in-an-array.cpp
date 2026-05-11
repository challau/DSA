class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;

        for(int num : nums){
            vector<int> temp;

            while(num > 0){
                temp.push_back(num % 10);
                num = num/10;
            }

            reverse(temp.begin(),temp.end());
            for(int d : temp){
               res.push_back(d);
            }

        }
        return res;
    }
};