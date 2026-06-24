class Solution 
{
    public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;

        for (int num : nums) 
        {
            pq.push(num);
        }//end of for loop
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        return (first - 1) * (second - 1);
    }//end of max product
};