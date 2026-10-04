#include <iostream>
#include <Windows.h>

int powerOfNumber(int value, int power);

int main()
{
    SetConsoleOutputCP(1251);
    int value1{ 5 };
    int power1{ 2 };
    int value2{ 3 };
    int power2{ 3 };
    int value3{ 4 };
    int power3{ 4 };
    powerOfNumber(value1, power1);
    powerOfNumber(value2, power2);
    powerOfNumber(value3, power3);
    return 0;
}

int powerOfNumber(int value, int power)
{
    int result{ 1 };
    for (int i = 0; i < power; i++)
    {
        result *= value;
    }

    std::cout << value << " в степени " << power << " = " << result << std::endl;

    return result;
};