#include <iostream>
#include <cmath>
using namespace std;

#include "Character.hpp"

namespace ariel
{
    Character::Character() : _playerName("player"), _healthPoints(100), _location(Point()) {}

    Character::Character(string name, Point p) : _playerName(name), _healthPoints(100), _location(p) {}

    
    bool Character::isAlive()
    {
        return false;
    }

    double Character::distance(Character *c)
    {
        return 0.0;
    }

    void Character::hit(int hit)
    {
        this->_healthPoints -= hit;
    }

    string Character::getName()
    {
        return this->_playerName;
    }

    Point Character::getLocation()
    {
        return this->_location;
    }

    string Character::print()
    {
        return "";
    }
}