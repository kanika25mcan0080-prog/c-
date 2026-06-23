class Solution 
{
    public:
    int maxProfit(vector<int>& prices) 
    {
        int buy=prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i] < buy)
            {
                buy = prices[i];   
            }//end of if block
            else if(prices[i] - buy > profit)
            {
                profit=prices[i]- buy;
            }// end of elise if block;
        }//end of for loop
        return profit;
    }// end of maxProfit
};