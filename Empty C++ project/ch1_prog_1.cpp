#include <iostream>
int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
    {
    	sum += i;
    }
    std::cout << "The sum from 50 to 100 is: " << sum << std::endl;

    int sum2 = 0, i=50;
    while (i <= 100)
    {
    	sum2 += i;
    	i += 1;
    }

    std::cout << "The sum from 50 to 100 is: " << sum << std::endl;

    return 0;
}
