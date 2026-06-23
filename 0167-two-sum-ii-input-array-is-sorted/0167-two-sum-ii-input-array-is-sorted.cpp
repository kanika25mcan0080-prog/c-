class Solution 
{
    public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int left=0;
        int right=numbers.size()-1;
        while(left<right)
        {
            int currentSum=numbers[left]+numbers[right];
            if(currentSum==target)
            {
                return {left+1,right+1};
            }//end of if block
            else if(currentSum < target)
            {
                left++;
            }//end of else if block
            else // if(currentSum > target)
            {
                right--;
            }//end of else block
        }//end of while loop
        return { };
    }//end of twoSum()
};