class MinStack {
public:

    vector <int> stack;
    vector <int> minStack;
    MinStack() 
    {
        
    }
    
    void push(int val) 
    {
        stack.push_back(val);
        if (minStack.empty())
        {
            minStack.push_back(val);
        }
        else
        {
            if (minStack.back() < val)
            {
                minStack.push_back(minStack.back());
            }
            else 
            {
                minStack.push_back(val);
            }
        }
        
    }
    
    void pop() 
    {
        stack.pop_back();
        minStack.pop_back();
    }
    
    int top() 
    {
        return stack.back();
        
    }
    
    int getMin() 
    {
        return minStack.back();
        
    }
};
