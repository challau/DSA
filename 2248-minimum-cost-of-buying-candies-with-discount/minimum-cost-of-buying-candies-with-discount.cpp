class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int cnt = 0;
        for(int i=0;i<cost.size();i++){
            if((i+1) % 3 == 0){
                continue;
            }else{
                cnt += cost[i]; 
            }
        }
        return cnt;
        
    }
};