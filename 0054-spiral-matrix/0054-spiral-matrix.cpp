class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m = mat.size();
        int n = mat[0].size();
        int strow = 0;
        int stcol = 0;
        int endrow = m-1;
        int endcol = n-1;
        while(strow <= endrow && stcol <= endcol){
            for(int j = stcol; j<= endcol; j++){
                ans.push_back (mat[strow][j]);

            }
            for(int i = strow + 1; i<= endrow; i++){
                ans.push_back(mat[i][endcol]);
            }
            for(int j=endcol-1; j>= stcol; j--){
                if(strow == endrow){
                    break;
                }
                ans.push_back(mat[endrow][j]);
            }
            for(int i = endrow-1; i>= strow+1; i--){
                if(stcol == endcol){
                    break;
                }
                ans.push_back(mat[i][stcol]);
            }
            strow++;
            endrow--;
            stcol++;
            endcol--;
        }
        return ans;
    }
};