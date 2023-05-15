#ifndef SMART_TEAM_H
    
    #define SMART_TEAM_H

    using namespace std;

    #include "Team.hpp"

    namespace ariel
    {
        class SmartTeam : public Team
        {
            public:
                SmartTeam(Character*);

                void attack(Team*);

                void print();
        };
    }

#endif