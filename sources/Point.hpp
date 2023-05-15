#ifndef POINT_H
    
    #define POINT_H

    using namespace std;

    namespace ariel
    {
        class Point 
        {
            private:
                double _x, _y;

            public:
                Point();

                Point(double, double);

                double getX();

                double getY();

                double distance(const Point&) const;

                void print();

                static Point moveTowards(const Point&, const Point&, double);
        };
    }

#endif