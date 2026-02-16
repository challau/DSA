class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int> freq;
        vector<int> ans;
        for(int x: bulbs){
            freq[x]++;
        }

        for(auto it: freq){
            if(it.second % 2 == 1){
                ans.push_back(it.first);
            }
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};