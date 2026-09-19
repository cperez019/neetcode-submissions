class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
   
    {
        unordered_map<int,int> seen;
        for (int i =0; i < nums.size(); i++)
        {
            int currentNumber = nums[i];
            int missingNumber = target - currentNumber;

            if (seen.find(missingNumber) != seen.end())
            {
                return {seen[missingNumber], i};
            }

            seen[currentNumber] = i;

        
            
        }

        return {};


        
    }
};
