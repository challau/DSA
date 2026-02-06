class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        unordered_set<int> s(v1.begin(),v1.end());
        vector<int> ans;
        for(int i = 0; i < v2.size(); i++){
            if(s.find(v2[i]) != s.end()){
                ans.push_back(v2[i]);
                s.erase(v2[i]);
            }
        }
        return ans;
    }
};