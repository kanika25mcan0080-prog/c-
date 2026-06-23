class Solution 
{   public:
    int calPoints(vector<string>& operations) 
    {    stack<int>  marksStack;
         for(string op : operations)
         {    if( op == "C"  )
         	  {   marksStack.pop();
			  }
			  else if( op == "D")
			  {   marksStack.push( 2 * marksStack.top() );
			  }
			  else if( op ==  "+")
			  {// Get the top two elements to calculate their sum
                int topScore = marksStack.top();
                marksStack.pop();
                int secondTopScore = marksStack.top();
                
                // Put the original top back, then push the new sum
                marksStack.push(topScore);
                int sum = topScore + secondTopScore;
                marksStack.push(sum);
               } 
               else 
               {   // Convert string to integer and push to stack
                  marksStack.push(stoi(op));
                }
		 }//end of for loop
         // Accumulate the final total from the stack
        int total = 0;
        while (!marksStack.empty()) 
        {   total = total + marksStack.top();
            marksStack.pop();
        }
        
        return total;
    }//end of calPoints()
};