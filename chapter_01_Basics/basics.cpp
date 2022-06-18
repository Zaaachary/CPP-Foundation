#include <iostream>

int main()
{
    int width;
    std::cout << width << std::endl; // 0
    width = 5;                       // copy assignment of value 5 into variable width
    std::cout << width << std::endl; // 5
    // variable width now has value 5

    int height(7);
    std::cout << height << std::endl; // 5
    int longest{7};
    std::cout << longest << std::endl; // 5

    int x{};       // value initialization
    std::cin >> x; // we're immediately replacing that value
    std::cout << x;
    return 0;
}