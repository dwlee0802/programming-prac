#include <iostream>
#include <vector>
#include <string>

bool checkString(std::string str);

int main()
{
	int cmdcount = 0;
	std::cin >> cmdcount;

	int *array = new int[cmdcount];
	size_t count = 0;

	char cmd;

	bool verbose = false;

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	while (cmdcount > 0)
	{
		cmdcount--;

		// 1 push x
		// 2: -1 if empty. else pop
		// 3: count
		// 4: is empty 1/0
		// 5: -1 if empty. else top

		std::cin >> cmd;

		switch (cmd)
		{
		case '1':
		{
			int num = -1;
			std::cin >> num;
			array[count] = num;
			count++;
			break;
		}
		case '2':
		{
			if (verbose)
				std::cout << "out: ";
			if (count <= 0)
				std::cout << "-1\n";
			else
			{
				std::cout << array[count - 1] << "\n";
				count -= 1;
			}
			break;
		}
		case '3':
		{
			if (verbose)
				std::cout << "out: ";
			std::cout << count << "\n";
			break;
		}
		case '4':
		{
			if (verbose)
				std::cout << "out: ";
			std::cout << (count == 0 ? 1 : 0) << "\n";
			break;
		}
		case '5':
		{
			if (verbose)
				std::cout << "out: ";
			if (count <= 0)
				std::cout << "-1\n";
			else
			{
				std::cout << array[count - 1] << "\n";
			}
			break;
		}
		}
	}

	delete array;
}