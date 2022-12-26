class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxSell = prices[prices.size()-1], profit=0;
        for(int i=prices.size()-1; i>=0; i--){
            if(maxSell < prices[i]){
                maxSell = prices[i];
            }
            profit = max(profit, maxSell - prices[i]);  
        }                       
        return profit;
    }
};

//TC:O(n) 
//SC:O(1)
