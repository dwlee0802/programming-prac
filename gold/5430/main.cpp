#include <iostream>
#include <vector>
#include <regex>
#include <string>

using std::vector;

int main()
{
	int tests = 0;
	std::cin >> tests;

	vector<std::string> results;

	for (; tests > 0; tests--)
	{
		std::string command;
		std::cin >> command;

		size_t arr_count = 0;
		std::cin >> arr_count;

		vector<std::string> nums;
		std::string numstr;
		std::cin >> numstr;

		std::string current_result;

		std::string substr;
		for (char c : numstr)
		{
			if (c == '[')
				continue;

			if (c == ',' || c == ']')
			{
				if (substr.size() != 0)
					nums.push_back(substr);
				substr.clear();
			}
			else
			{
				substr.push_back(c);
			}
		}

		int start = 0;
		int end = nums.size() - 1;
		int count = nums.size();
		bool flipped = false;
		bool error = false;

		// do operations
		for (char c : command)
		{
			// printf("start: %d, end: %d\n", start, end);

			if (c == 'R')
			{
				// reverse
				flipped = !flipped;
			}
			else if (c == 'D')
			{
				// pop front
				if (flipped)
				{
					end--;
				}
				else
				{
					start++;
				}

				count--;

				if (count < 0)
				{
					error = true;
					break;
				}
			}
		}

		// std::cout << "Count: " << count << '\n';

		// make result string
		if (error)
			current_result = "error";
		else
		{
			current_result = "[";

			// printf("start: %d, end: %d\n", start, end);

			if (!flipped)
			{
				for (int i = start; i <= end; i++)
				{
					if (i != start)
						current_result += ",";
					current_result.append(nums[i]);
				}
			}
			else
			{
				for (int i = end; i >= start; i--)
				{
					if (i != end)
						current_result += ",";
					current_result.append(nums[i]);
				}
			}

			current_result += "]";
		}

		// results.push_back(current_result);
		std::cout << current_result << '\n';
	}

	// print results
	// for (auto item : results)
	// {
	// 	if (item != results.front())
	// 		std::cout << '\n';
	// 	std::cout << item;
	// }
}