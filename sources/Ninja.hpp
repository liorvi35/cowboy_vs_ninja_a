#ifndef NINJA_H
    
    #define NINJA_H

    using namespace std;

    #include "Character.hpp"

    namespace ariel
    {
        class Ninja : public Character
        {
            protected:
                int _speed;

            public:
                Ninja();

                Ninja(string, Point);

                void move(Character*);

                void slash(Character*);
        };
    }

#endif