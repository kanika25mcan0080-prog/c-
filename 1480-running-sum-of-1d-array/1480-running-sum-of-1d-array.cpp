class Solution 
{
    public:
    vector<int> runningSum(vector<int>& nums)
    {
        
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i]+ nums[i-1];
        }// end of for loop
        return nums;
    }//end of runnig sum()
};