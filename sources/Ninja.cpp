#include <iostream>
#include <cmath>
using namespace std;

// #include "Character.hpp"
#include "Ninja.hpp"

namespace ariel
{
    Ninja::Ninja() : Character(), _speed(0) {}

    Ninja::Ninja(string name, Point p)
    {
        this->_playerName = name;
        this->_location = p;
        this->_speed = 0;
    }

    void Ninja::move(Character *other) {}

    void Ninja::slash(Character *other) {}
}