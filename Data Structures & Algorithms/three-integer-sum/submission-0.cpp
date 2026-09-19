class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        vector <vector <int>> summedToZero;

        for (int i = 0; i < nums.size(); i++)
        {
            int needsToEqual = -nums[i];
            int left = i+1;
            int right = nums.size()-1;

            if (i > 0 && nums[i-1] == nums[i])
            {
                continue;
            }

            while (left < right)
            {
                int sum = nums[left]+nums[right];

                if(needsToEqual == sum)
                {
                    vector <int> foundZero = {nums[left], nums[right],nums[i]}; 
                    summedToZero.push_back(foundZero);
                    left++;
                    right--;

                    while (left < right && nums[left] == nums [left-1])
                    {
                        left++;
                    } 

                    while (left < right && nums[right] == nums[right+1])
                    {
                        right--;
                    }

                }

                else if (sum < needsToEqual)
                {
                    left++;
                }

                else
                {
                    right--;
                }
            }

        }
        return summedToZero;

        
    }
};
