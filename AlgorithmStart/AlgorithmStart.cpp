#include <iostream>
#include <array>

void print(std::array<int, 4> arr);

int main()
{
    std::cout << "Hello World!\n";
    std::array<int, 4> arr1;

    for (int i = 0; i < arr1.size(); i++)
        std::cin >> arr1.at(i);

    /*
    for (int i = 0; i < arr1.size(); i++)
        std::cout << arr1.at(i) << " ";
    std::cout << std::endl;

    try
    {
        for (int i = 0; i < 5; i++)
            std::cout << arr1.at(i) << " ";
    }
    catch (const std::exception& e)
    {
        std::cerr << "\n" << e.what() << std::endl;
    }
    std::cout << std::endl;
    */

    print(arr1);
}

/*
void print(std::array<int, 4> arr)
{
    for (auto ele : arr)
        std::cout << ele << " ";
}
*/

void print(std::array<int, 4> arr)
{
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        auto element = (*it);
        std::cout << element << " ";
    }
}