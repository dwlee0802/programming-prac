#include <iostream>
#include <vector>
using std::vector;

vector<int> Merge(vector<int> &left, vector<int> &right);

int main()
{
    int count = 0;
    std::cin >> count;

    std::vector<std::vector<int>> lists;

    // read in numbers O(n)
    for (int i = 0; i < count; i++)
    {
        int num;
        std::cin >> num;
        lists.push_back(vector<int>(1, num));
    }

    // keep sorting until there's only one giant list
    // O(nlogn)
    while (lists.size() != 1)
    {
        vector<vector<int>> temp;
        for (auto it = lists.begin(); it != lists.end(); ++it)
        {
            if ((it + 1) == lists.end())
            {
                temp.push_back(*it);
            }
            else
            {
                temp.push_back(Merge(*it, *(it + 1)));
                it++;
            }
        }
        lists = temp;
    }

    // print result
    for (int num : lists.front())
    {
        std::cout << num << "\n";
    }
}

// merge two lists O(n)
vector<int> Merge(vector<int> &left, vector<int> &right)
{
    vector<int> output;

    std::vector<int>::iterator leftIter = left.begin();
    std::vector<int>::iterator rightIter = right.begin();

    while (true)
    {
        if (leftIter == left.end() && rightIter == right.end())
            break;

        if (leftIter >= left.end())
        {
            output.push_back(*rightIter);
            ++rightIter;
        }
        else if (rightIter >= right.end())
        {
            output.push_back(*leftIter);
            ++leftIter;
        }
        else
        {
            if (*rightIter < *leftIter)
            {
                output.push_back(*rightIter);
                ++rightIter;
            }
            else
            {
                output.push_back(*leftIter);
                ++leftIter;
            }
        }
    }

    return output;
}