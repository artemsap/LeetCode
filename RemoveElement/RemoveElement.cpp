#include <iostream>
#include <vector>

class Solution 
{
public:
    int removeElement(std::vector<int>& nums, int val) 
    {
        size_t index = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[index++] = nums[i];
            }
        }

        return index;
    }
};

int main()
{
    Solution sol;
    std::vector<int> nums = { 3,2,2,3 };
    sol.removeElement(nums, 3);

    std::vector<int> nums1 = { 1 };
    sol.removeElement(nums1, 1);

    std::vector<int> nums2 = { 0 };
    sol.removeElement(nums2, 1);

    std::cout << "Hello World!\n";
}