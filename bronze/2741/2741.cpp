#include <iostream>

int main(int argc, char **argv)
{
    int count = 0;
    std::cin >> count;

    for (int i = 1; i <= count; i++)
    {
        std::cout << i << "\n";
    }
}