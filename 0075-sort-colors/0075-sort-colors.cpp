class Solution 
{
    public:
    void sortColors(vector<int>& nums) //Dutch flag algo
    {
        int left =0;
        int temp=0;
        int right=nums.size()-1;
        while(temp<=right)
        {
            if(nums[temp]==0)
            {
                swap(nums[temp],nums[left]);
                left++;
                temp++;
            }//end of if block
            else if(nums[temp]==2)
            {
                swap(nums[temp],nums[right]);
                right--;
                
            }//end of else if block
            else
            {
                temp++;
            }//end of else block
        }//end of while loop
    }//end of sortColors()
};