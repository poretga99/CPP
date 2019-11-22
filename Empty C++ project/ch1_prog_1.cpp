#include <iostream>
int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
			  << " is " << v1 + v2 << std::endl;
    // 1.3 naloga
    std::cout << "Hello, World!" << std::endl;
    // 1.4 naloga
    std::cout << "Enter two numbers again:" << std::endl;
    int u1, u2;
    std::cin >> u1 >> u2;
    std::cout << "The product of " << u1 << " and " << u2 << " is " << u1 * u2 << std::endl;
    return 0;
    //1.5 not legal, we dont use any operand after ;
}
