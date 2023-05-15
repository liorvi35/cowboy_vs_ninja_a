#include <iostream>
#include <cmath>
using namespace std;

#include "TrainedNinja.hpp"

namespace ariel
{
    TrainedNinja::TrainedNinja(string name, Point location)
    {
        this->_playerName = name;
        this->_location = location;
        this->_speed = 8;
        this->_healthPoints = 150;
    }
}