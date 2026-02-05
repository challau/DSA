class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = nums.size() - 1;
        while(l<r){
            int left = nums[l];
            int right = nums[r];
            if(-left == right){
                return right;
            }else if(-left > right){
                l++;
            }else{
                r--;
            }
        }
        return -1;    
    }
};