#include <iostream>
#include <vector>
#include <string>

int main()
{
	int cmdcount = 0;
	std::cin >> cmdcount;

	int *array = new int[cmdcount];
	// index to the position of the last element
	size_t index = -1;

	int num = -1;
	int sum = 0;

	bool verbose = true;

	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	while (cmdcount > 0)
	{
		cmdcount--;
		std::cin >> num;

		// remove from stack
		if (num == 0)
		{
			sum -= array[index];
			index -= 1;
		}
		else
		{
			sum += num;
			index++;
			array[index] = num;
		}
	}

	delete array;

	std::cout << sum;
}