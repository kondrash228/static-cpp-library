#include "BigNumLib.h"
#include <iostream>

int main()
{
    try
    {
        std::string a = "-123";
        bignum b = "123";
        bignum c = a;
        bignum d = "--123";
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
