// StringCompression.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Solution
{
public:
    int compress(vector<char>& chars)
    {
        vector<char> compressed_chars;
        compressed_chars.reserve(chars.size());

        int counter = 1;
        for (size_t i = 0; i < chars.size(); i++)
        {
            if (i != chars.size() - 1 && chars[i] == chars[i + 1])
            {
                counter++;
            }
            else
            {
                compressed_chars.push_back(chars[i]);
               
                if (counter != 1)
                {
                    std::string counter_str = to_string(counter);
                    for (const char num : counter_str)
                    {
                        compressed_chars.push_back(num);
                    }
                }

                counter = 1;
            }
        }

        chars = std::move(compressed_chars);
        return chars.size();
    }
};

int main()
{
    std::vector<char> chars = { 'a', 'a', 'b', 'b', 'c', 'c', 'c' };

    Solution sol;
    sol.compress(chars);

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
