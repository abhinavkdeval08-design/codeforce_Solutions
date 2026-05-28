// Last updated: 29/05/2026, 00:06:43
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;
        int first_buy = INT_MAX; 
        int second_buy = INT_MAX;
        
        int first_profit = 0;
        int second_profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            
            first_buy = min(first_buy, prices[i]);
            first_profit = max(first_profit, prices[i] - first_buy);
            second_buy = min(second_buy, prices[i] - first_profit);

            second_profit = max(second_profit, prices[i] - second_buy);
        }

        return second_profit; 
    }
};