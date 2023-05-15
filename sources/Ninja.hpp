#ifndef NINJA_H
    
    #define NINJA_H

    using namespace std;

    #include "Character.hpp"

    namespace ariel
    {
        class Ninja : public Character
        {
            private:
                int _speed;

            public:
                Ninja(string, int, Point, int);

                void move(Character*);

                void slash(Character*);
        };
    }

#endif