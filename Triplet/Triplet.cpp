// Triplet.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<vector>

using namespace std;

class Solution
{
public:
    bool increasingTriplet(vector<int>& nums)
    {
        if (nums.size() < 3)
            return false;

        int min_1 = INT_MAX, min_2 = INT_MAX;
        for (const auto num : nums)
        {
            if (num <= min_1)
            {
                min_1 = num;
            }
            else if (num <= min_2)
            {
                min_2 = num;
            }
            else
            {
                return true; // Found a number greater than both first and second
            }
        }

        return false;
    }
};

int main()
{
    Solution sol;
    std::vector<int> nums = { 20,100,10,12,5,13 };
    sol.increasingTriplet(nums);

    std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
