#include <iostream>
int main()
{
    int num = 10;
    while (num >= 0)
    {
    	std::cout << num << std::endl;
    	num -= 1;
    }


    std::cout << "Using for loop: " << std::endl;

    for (int i = 10; i >= 0; --i)
    {
    	std::cout << i << std::endl;
    }
    return 0;
}
