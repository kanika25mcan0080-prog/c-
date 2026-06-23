class Solution 
{
    public:
    int majorityElement(vector<int>& nums)
    {
        // use of Moore's voting Algorithm
        int candidate=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] == candidate)
            {
                count++;
            }
            else
            {
                count--;
                if(count==0)
                {
                    candidate=nums[i];
                    count = 1;
                }
            }//end of else block
        }//end of for loop
        return candidate;
    }// end of majority element()
};