#include <iostream>
#include <cmath>
using namespace std;

#include "Cowboy.hpp"

namespace ariel
{
    Cowboy::Cowboy(string name, Point p)
    {
        this->_playerName = name;
        this->_location = p;
        this->_bullets = 6;
        this->_healthPoints = 110;
    }

    void Cowboy::shoot(Character *other) {}

    bool Cowboy::hasboolets()
    {
        return (this->_bullets > 0);
    }

    void Cowboy::reload()
    {
        this->_bullets = 6;
    }
}