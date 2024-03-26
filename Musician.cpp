#include "Musician.h"
Musician::Musician()
{
    this->experience = 0;
    this->instrument = "null";
}

Musician::Musician(std::string instrument, int experience)
{
    this->experience = experience;
    this->instrument = instrument;
}

std::string Musician::get_instrument()
{
    return instrument;
}

int Musician::get_experience()
{
    return experience;
}

Musician::~Musician(){};
