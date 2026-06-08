class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = 0;
        int max_price = 0;
        for(int i=0; i<prices.size(); i++){
            for(int j=i+1; j<prices.size(); j++){
                min_price = min(prices[i], prices[j]);
                int diff = prices[j] - prices[i];
                max_price = max(diff, max_price);

            }
        }
        return max_price;
    }
};
