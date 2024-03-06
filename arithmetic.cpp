#include <iostream>
void binaryArithmetic(int bin1, int bin2)
{
    int i = 0, c = 0;
    std::string sum;

    while (bin1 != 0 || bin2 != 0)
    {
        sum.insert(sum.begin(), '0' + ((bin1 % 10 + bin2 % 10 + c) % 2)); // remainder
        c = ((bin1 % 10 + bin2 % 10 + c) / 2);                            // carry... cats to whole num
        bin1 = bin1 / 10;                                                 // next bit
        bin2 = bin2 / 10;                                                 // "       "
    }
    if (c != 0)
        sum.insert(sum.begin(), '0' + c);
    std::cout << sum << std::endl;
}

int main()
{
    binaryArithmetic(10101, 11100);
    return 0;
}