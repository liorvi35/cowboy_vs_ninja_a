#ifndef COWBOY_H
    
    #define COWBOY_H

    using namespace std;

    #include "Character.hpp"

    namespace ariel
    {
        class Cowboy : public Character
        {
            private:
                int _bullets;

            public:
                Cowboy();

                Cowboy(string, int, Point, int);

                void shoot(Character*);

                void hasboolets();

                void reload();
        };
    }

#endif