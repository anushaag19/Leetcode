class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num: nums){
            mp[num]++;
        }
        for(pair<int,int> x:mp){
            if (x.second == 1){
                return x.first;
            }
        }
        return 0;
    }
};