#ifndef COWBOY_H
    
    #define COWBOY_H

    using namespace std;

    #include "Character.hpp"

    namespace ariel
    {
        class Cowboy : public Character
        {
            protected:
                int _bullets;

            public:
                Cowboy(string, Point);

                void shoot(Character*);

                bool hasboolets();

                void reload();
        };
    }

#endif