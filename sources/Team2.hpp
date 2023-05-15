#ifndef TEAM_2_H
    
    #define TEAM_2_H

    using namespace std;

    #include "Team.hpp"

    namespace ariel
    {
        class Team2
        {       
            public:
                Team2(Character*);

                void attack(Team*);

                void print();
        };
    }

#endif