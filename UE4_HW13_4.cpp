#include <iostream>
#include "helpers.h"

int main()
{
    int x, y, result;

    std::cout << "Type first number:";
    std::cin >> x;
    std::cout << "Type second number:";
    std::cin >> y;

    result = squareRoot(x, y);

    std::cout << "\n(x+y)^2 = " << result << std::endl;
}

