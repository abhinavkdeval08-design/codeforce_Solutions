// Last updated: 29/05/2026, 00:06:48
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int minprice = prices[0];
        for(int i=1;i<prices.size();i++){
                profit = max(profit,prices[i]-minprice);
                minprice = min(prices[i],minprice);
        }
        return profit;  
    }
};