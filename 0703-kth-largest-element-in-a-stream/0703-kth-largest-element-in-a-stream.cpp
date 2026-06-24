class KthLargest 
{
    public:
    int k;
    //Ascending order priority queue
    priority_queue<int,vector<int>,greater<int>> pq;
    KthLargest(int k, vector<int>& nums) 
    {
        this->k=k;
        for(int n:nums)
        {
            add(n);
        }//end of for loop
    }// end of constructor
    
    int add(int val) 
    {
        pq.push(val);
         if(pq.size()>k)
        {
            pq.pop();
        }//end of if block
        return pq.top();  
    }//end of add()
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */