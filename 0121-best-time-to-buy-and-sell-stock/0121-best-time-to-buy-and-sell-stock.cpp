class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int profit = 0;
        int maxprofit = 0;
        for (int i =0; i<prices.size();i++){
            int price = prices [i];
            minprice = min(minprice,price);
            profit = price - minprice;
            maxprofit = max(maxprofit, profit);
        }
        return maxprofit;
    }
};