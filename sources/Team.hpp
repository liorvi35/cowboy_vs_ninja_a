#ifndef TEAM_H
    
    #define TEAM_H

    #include <vector>
    using namespace std;

    #include "Cowboy.hpp"
    #include "OldNinja.hpp"
    #include "YoungNinja.hpp"
    #include "TrainedNinja.hpp"

    namespace ariel
    {
        class Team 
        {
            private:
                vector<Character*> _team;

                Character* _teamLeader;
            
            public:

                Team(Character*);

                void add(Character* mem);

                void attack(Team*);

                int stillAlive();

                void print();
        };
    }

#endif