#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

class Solution 
{
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs)
    {
        size_t min_size = strs.front().size();
        for (const auto& str : strs)
        {
            min_size = std::min(str.size(), min_size);
        }

        std::string prefix = "";
        for (size_t i = 0; i < min_size; i++)
        {
            std::unordered_map<char, int> prefix_checker;
            for (const auto& str : strs)
            {
                prefix_checker[str[i]]++;
            }

            if (prefix_checker.size() == 1)
            {
                prefix += strs.front()[i];
            }
            else
            {
                return prefix;
            }
        }

        return prefix;
    }
};

int main()
{
    Solution solution;
    
    std::vector<std::string> strs = { "flower", "flow", "flight" };
    solution.longestCommonPrefix(strs);
    std::cout << "Hello World!\n";
}
