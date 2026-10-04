#include <iostream>

int fibonacci(int index);

int main()
{
    int index{};

    std::cout << "Enter index number of Fibonacci sequence: ";
    std::cin >> index;
    std::cout << "Fibonacci sequence: ";
    for (int i = 0; i < index; i++)
    {
        std::cout << fibonacci(i) << " ";
    }

    return 0;
}
int fibonacci(int index)
{
    if (index <= 1)
        return index;
    return fibonacci(index - 1) + fibonacci(index - 2);
}