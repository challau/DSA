class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cntp = 0;
        int cntN = 0;
        for(int i = 0;i < nums.size(); i++){
            if(nums[i] > 0){
                cntp = cntp+1;
            }else if (nums[i] < 0){
                cntN = cntN+1;
            }else{
                continue;
            }
        }
        return max(cntp,cntN);
    }
};