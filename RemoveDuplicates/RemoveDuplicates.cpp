#include <iostream>
#include <vector>
#include <algorithm>

class Solution 
{
public:
    int removeDuplicates(std::vector<int>& nums) 
    {
        size_t unique = 1;
        for (size_t i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[unique - 1])
            {
                std::swap(nums[unique], nums[i]);
                unique++;
            }
        }

        return unique;
    }
};

int main()
{
    Solution solution;

    std::vector<int> nums = { 1,1,2,3 };
    int res = solution.removeDuplicates(nums);
    
    std::cout << "Hello World!\n";
}