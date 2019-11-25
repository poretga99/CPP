#include <iostream>
#include <limits>
#include <climits>
int main()
{
    enum e1 { a=3, b=9};
    int* p;
    // char has 8 bits, sizeof(type) returns size in char character, so bits=sizeof(type)*8bit
    std::cout << "Size of type bool is: " << sizeof(bool) << std::endl;
    std::cout << "Size of type char is: " << sizeof(char) << std::endl;
    std::cout << "Size of type short is: " << sizeof(short) << std::endl;
    std::cout << "Size of type int is: " << sizeof(int) << std::endl;
    std::cout << "Size of type long is: " << sizeof(long) << std::endl;
    std::cout << "Size of type float is: " << sizeof(float) << std::endl;
    std::cout << "Size of type double is: " << sizeof(double) << std::endl;
    std::cout << "Size of type long double is: " << sizeof(long double) << std::endl;
    std::cout << "Size of type unsigned is: " << sizeof(unsigned) << std::endl;
    std::cout << CHAR_BIT << std::endl;
    std::cout << "Size of type int pointer is: " << sizeof(p) << std::endl; //fixed 8 byte on x64?
    std::cout << "Size of enumerator e1 is:" << sizeof(e1) << std::endl; //min(e1) = 9 -> nearest 2**n - 1 -> 2**4 - 1
    return 0;
}
