#include <iostream>
#include <cmath>
using namespace std;

#include "Character.hpp"

namespace ariel
{
    Cowboy::Cowboy() : Character(), _speed(0) {}

    Cowboy::Cowboy(string name, int hp, Point &p, int speed) : Character(name, hp, p), _bullets(6) {}

    void Cowboy::shoot(Character *other) {}

    void Cowboy::hasboolets(Character *other) 
    {
        return (this->_bullets > 0);
    }

    void Ninja::reload(Character *other) {}
}