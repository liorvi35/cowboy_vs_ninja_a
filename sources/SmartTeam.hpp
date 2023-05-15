#ifndef SMART_TEAM_H
    
    #define SMART_TEAM_H

    using namespace std;

    #include "Team.hpp"

    namespace ariel
    {
        class SmartTeam 
        {
            public:
                SmartTeam(Character*);

                void attack(Team*) override;

                void print() override;
        };
    }

#endif