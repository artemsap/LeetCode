// NextPermutation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    void nextPermutation(vector<int>& nums) 
    {
        bool done = false;
        for (size_t i = nums.size() - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                done = true;
                std::swap(nums[i], nums[i - 1]);
                break;
            }
        }

        if (!done)
        {
            std::reverse(nums.begin(), nums.end());
        }
    }
};

int main()
{
    Solution sol;
    std::vector<int> nums1 = { 1,2,3 };
    sol.nextPermutation(nums1);

    std::vector<int> nums2 = { 3,2,1 };
    sol.nextPermutation(nums2);

    std::vector<int> nums3 = { 1,3,2 };
    sol.nextPermutation(nums3);

    std::cout << "Hello World!\n";
}

