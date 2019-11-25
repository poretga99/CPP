#include <iostream>
int main()
{
	std::cout << "Enter pair of values." << std::endl;
	int first, second, larger;
	std::cin >> first >> second;
	if (first > second)
	{
		larger = first;
	}
	else
	{
		larger = second;
	}
	std::cout << "Larger number is: " << larger << std::endl;
    return 0;
}
