#include <iostream>
#include <cmath>
using namespace std;

#include "Character.hpp"

namespace ariel
{
    Ninja::Ninja() : Character(), _speed(0) {}

    Ninja::Ninja(string name, int hp, Point &p, int speed) : Character(name, hp, p), _speed(speed) {}

    void Ninja::move(Character *other) {}

    void Ninja::slash(Character *other) {}
}