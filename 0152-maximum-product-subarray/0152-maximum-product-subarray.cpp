class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxpro = nums[0];
        int minpro =  nums[0];
        int maxproduct = nums[0];
        for(int i =1;i<nums.size();i++){
            int v1 = maxpro * nums[i];
            int v2 = minpro * nums[i];
            int v3 = nums[i];
            maxpro = max(v1 , max(v2,v3));
            minpro = min(v1,min(v2,v3));
            maxproduct = max(maxproduct, max(maxpro,minpro));
        }
        return maxproduct;
        
    }
};