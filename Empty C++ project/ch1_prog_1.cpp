#include <iostream>
int main()
{
	std::cout << "Enter unknown number of values. Remeber to terminate with CTRL+D!" << std::endl;
	int sum = 0, value;
	while (std::cin >> value)
	{
		if (value < 0)
		{
			sum += 1;
		}
	}
	std::cout << "Number of negative values is: " << sum << std::endl;
    return 0;
}
