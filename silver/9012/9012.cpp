#include <iostream>
#include <vector>
#include <string>

bool checkString(std::string str);

int main()
{
    int count = 0;
    std::cin >> count;

    std::vector<bool> answers(count, false);

    for (size_t i = 0; i < count; i++)
    {
        std::string ps;
        std::cin >> ps;
        answers[i] = checkString(ps);
    }

    for (bool b : answers)
        std::cout << (b ? "YES" : "NO") << '\n';
}

bool checkString(std::string str)
{
    int value = 0;
    for (char c : str)
    {
        if (c == '(')
            value += 1;
        if (c == ')')
            value -= 1;

        if (value < 0)
            return false;
    }

    return value == 0;
}