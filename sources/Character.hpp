#ifndef CHARACTER_H
    
    #define CHARACTER_H

    #include <string>
    using namespace std;

    #include "Point.hpp"

    namespace ariel
    {
        class Character 
        {
            protected:
                string _playerName;

                int _healthPoints;

                Point _location;

            public:
                Character();

                Character(string, Point);

                bool isAlive();

                double distance(Character*);

                void hit(int);

                string getName();

                Point getLocation();

                string print();
        };
    }

#endif