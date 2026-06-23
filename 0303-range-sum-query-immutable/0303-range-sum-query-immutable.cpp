class NumArray 
{
    private:
    vector<int> prefixSum;
    public:
    NumArray(vector<int>& nums)
    {
        int n= nums.size();
        prefixSum.resize(n,0);
        prefixSum[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }//end of for loop
    }//end of constructor
    
    int sumRange(int left, int right) 
    {
       if(left==0)
       {
            return prefixSum[right];
       } 
       return prefixSum[right] - prefixSum[left -1];
    }//end of sumRange()
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */