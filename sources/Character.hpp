#ifndef CHARACTER_H
    
    #define CHARACTER_H

    #include <string>
    using namespace std;

    #include "Point.hpp"

    namespace ariel
    {
        class Character 
        {
            private:
                string _playerName;

                int _healthPoints;

                Point _location;

            public:
                Character();

                Character(string, int, Point&);

                virtual bool isAlive();

                virtual double distance(Character*);

                virtual void hit(int);

                virtual string getName();

                virtual Point getLocation();

                virtual string print();
        };
    }

#endif