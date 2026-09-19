class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int lowAtMoment = prices[0];
        int biggestProfitAtMoment = 0;
        int biggestProfit = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices [i] < lowAtMoment)
            {
                lowAtMoment = prices [i];
 
            }

            biggestProfitAtMoment = prices[i] - lowAtMoment;

            if (biggestProfit < biggestProfitAtMoment)
            {
                biggestProfit = biggestProfitAtMoment;
            }

        }
        return biggestProfit;
        
    }
};
