#include <iostream>
void transformBase(int base10)
{
    std::string base2;

    while (base10 > 0)
    {
        if ((base10 % 2) == 0)
            base2.insert(base2.begin(), '0');
        else
            base2.insert(base2.begin(), '1');
        base10 >>= 1;
    }
    std::cout << base2 << std::endl;
}

int main()
{
    std::cout << "what is you base 10 number: " << std::endl;
    std::string base10{};
    std::cin >> base10;
    try
    {
        std::stoi(base10);
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
        return 1;
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << "Out of range: " << e.what() << std::endl;
        return 1;
    }
    transformBase(std::stoi(base10));
    return (0);
}