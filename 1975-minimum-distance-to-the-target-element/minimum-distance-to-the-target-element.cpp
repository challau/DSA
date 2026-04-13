class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minDist = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                int n = abs(i - start);
                if(n < minDist){ minDist = n;}
            }
        }
        return minDist;
    }
};