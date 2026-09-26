class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int r = height.size()-1;
        int l = 0;
        while(l<r){
            int w = r - l;
            int h = min(height[r],height[l]);
            int area = w * h;
            ans = max(area,ans);
            height[l]<height[r] ? l++ : r--;
        }
        return ans;
        
    }
};