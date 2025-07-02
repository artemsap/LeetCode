#include <iostream>
#include <vector>
#include <unordered_map>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) //one pass hash table
    {
        std::unordered_map<int, int> tmp;

        for (size_t i = 0; i < nums.size(); i++)
        {
            if (auto founded = tmp.find(nums[i]); founded != tmp.end())
            {
                return { founded->second, (int)i };
            }

            int substract = target - nums[i];
            tmp.emplace(substract, i);
        }

        return {};
    }
};

int main()
{
    Solution sol;

    std::vector<int> nums = { 2, 7, 11, 15 };
    sol.twoSum(nums, 9);

    std::cout << "Hello World!\n";
}

