#include <iostream>
#include <stdlib.h> //abs
int main()
{
	std::cout << "Write pair of numbers." << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	std::cout << "program starting..." << std::endl;
	int smaller = v1, larger = v2;
	if (v1 > v2)
	{
		smaller = v2;
		larger = v1;
	}
	int count = 1;
	while (smaller <= larger && count <= 10)
	{
		std::cout << smaller << std::endl;
		smaller += 1;
		count += 1;
	}

    return 0;
}
