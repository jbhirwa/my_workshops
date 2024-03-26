#include "Orchestra.h"
#include <iostream>

int main()
{
    Musician m1;
    Orchestra orc1;
    orc1.add_musician(m1);
    std::cout << orc1.get_current_number_of_members() << " "
              << orc1.get_members() << " "
              << orc1.get_orchestra_name() << " "
              << orc1.has_instrument("Guitar") << " "
              << std::endl;
    Musician m2("guitar", 5);
    Orchestra orc2(5, "the lunatics");
    orc2.add_musician(m1);
    orc2.add_musician(m2);
    orc2.add_musician(m2);
    orc2.add_musician(m2);
    orc2.add_musician(m2);

    bool result = orc2.has_instrument("guitar");
    int mems = orc2.get_current_number_of_members();
    std::cout << result << " " << mems << std::endl;
    Musician *musician_arr = orc2.get_members();
    for (int i = 0; i < orc2.get_current_number_of_members(); i++)
    {
        std::cout << musician_arr[i].get_instrument() << std::endl;
    }

    return 0;
}