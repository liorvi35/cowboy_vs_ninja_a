#include <iostream>
#include <cmath>
using namespace std;

#include "Team.hpp"

namespace ariel
{
    Team::Team(Character *leader) 
    {
        this->_team.push_back(leader);
    }


    void Team::attack(Team *enemies) {}

    int Team::stillAlive()
    {
        return 0;
    }

    void Team::print() {}
}