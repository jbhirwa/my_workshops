#include "Orchestra.h"

Orchestra::Orchestra()
{
    this->max_size = 1;
    this->member_count = 0;
    // this->orchestra_name = "null";
    this->members = new Musician[max_size];
    // if ()
    // this->members = nullptr;

} // default constructor
Orchestra::Orchestra(int size)
{
    this->max_size = size;
    this->member_count = 0;
    this->orchestra_name = "null";
    this->members = new Musician[size];
} // constructor for an orchestra of given size

Orchestra::Orchestra(int size, std::string name)
{
    this->max_size = size;
    this->member_count = 0;
    this->orchestra_name = name;
    this->members = new Musician[size];

} // constructor for an orchestra of given size and name

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members()
{
    return this->member_count;
}

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(std::string instrument)
{
    for (int i = 0; i < this->member_count; i++)
        if (this->members[i].get_instrument() == instrument)
            return true;
    return false;
}

Musician *Orchestra::get_members()
{
    return (*this).members;
} // returns the array of members of the orchestra

// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false

std::string Orchestra::get_orchestra_name()
{
    return this->orchestra_name;
}

bool Orchestra::add_musician(Musician new_musician)
{
    if (this->member_count < this->max_size)
    {
        this->members[member_count] = new_musician;
        member_count++;
        return true;
    }
    else
        return false;
}

Orchestra::~Orchestra(){};