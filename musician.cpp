#include "Musician.h"
Musician::Musician()
{
    this->experience = 0;
    this->instrument = new std::string("null");
}
Musician::Musician(std::string instrument, int experience)
{
    this->experience = experience;
    this->instrument = new std::string(instrument);
}
std::string Musician::get_instrument()
{
    return *this->instrument;
}
int Musician::get_experience()
{
    return experience;
}
Musician::~Musician(){};
