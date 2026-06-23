class Solution
{
    //unordered set
    public:
    long long maximumSubarraySum(vector<int>& nums, int k) //sliding window
    {
        int n=nums.size();
        unordered_set<int> history;
        long long currentSum=0;
        long long maxSum=0;
        int left=0;
        for(int right=0;right<n;right++)
        {
            while(history.count(nums[right]) == 1)
            {
                currentSum=currentSum-nums[left];
                history.erase(nums[left]);
                left++; 
            }//end of while loop
            history.insert(nums[right]);
            currentSum= currentSum+nums[right];

            if(right-left+1 == k)
            {
                maxSum = max(maxSum,currentSum);
                //Slide  the window forward by removing the leftmost element
                currentSum = currentSum-nums[left];
                history.erase(nums[left]);
                left++;
            }//end of if block
        }//end of for loop
        return maxSum;
    }//end of maximumSubarraySum()
};


