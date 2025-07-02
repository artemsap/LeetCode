#include <iostream>
#include <vector>
#include <unordered_map>
#include <span>
#include <algorithm>
#include <set>

class Solution
{
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) 
    {
        std::sort(nums.begin(), nums.end());

        std::unordered_map<int, int> map;
        for (size_t i = 0; i < nums.size(); i++)
        {
            map[nums[i]] = i;
        }

        std::vector<std::vector<int>> result;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                break;
            }

            for (size_t j = i + 1; j < nums.size(); j++)
            {
                int num_to_find = -(nums[i] + nums[j]);
                
                if (map.count(num_to_find) > 0 && map.find(num_to_find)->second > j)
                {
                    result.push_back({ nums[i] , nums[j] , num_to_find });
                }
                j = map.find(nums[j])->second;
            }
            i = map.find(nums[i])->second;
        }

        return result;
    }
};

int main()
{
    Solution solution;
    std::vector<int> nums = { -1, 0, 1, 2, -1, -4 };
    auto res = solution.threeSum(nums);

    std::cout << "Hello World!\n";
}
