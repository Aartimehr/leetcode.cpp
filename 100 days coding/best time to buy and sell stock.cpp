class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,max=INT_MAX;
        for (int i=0;i<prices.size();i++)
        {
            if(prices[i]<max)
            max=prices[i];
            if(profit<prices[i]-max)
            profit=prices[i]-max;
        }
        return profit;
    }
};
