#include <iostream>
int main()
{
    int sum = 0, val = 1;
    while (val <= 10)
    {
    	sum += val;
    	++val;
    }
    std::cout << "Sum of 1 to 10, inclusive is " << sum << std::endl;

    int sum2 = 0;
    for (int val2 = 1; val2 <= 10; ++val2)
    {
        sum2 += val2;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum2 << std::endl;

    int sum3 = 0;
    for (int i = -100; i <= 100; ++i)
    {
    	sum3 += i;
    }

    std::cout << "The sum from -100 to 100 in for loop is: " << sum3 << std::endl;

    return 0;
}
