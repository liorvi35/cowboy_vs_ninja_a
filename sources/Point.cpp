#include <iostream>
#include <cmath>
using namespace std;

#include "Point.hpp"

namespace ariel
{
    Point::Point() : _x(0), _y(0) {}

    Point::Point(double x, double y) : _x(x), _y(y) {}

    double Point::getX()
    {
        return this->_x;
    }

    double Point::getY()
    {
        return this->_y;
    }

    double Point::distance(const Point &other) const
    {
        return sqrt(pow((this->_x - other._x), 2) + pow((this->_y - other._y), 2));
    }

    void Point::print()
    {
        cout << "(" << (this->_x) << "," (this->_y) << ")" << endl;
    } 

    Point Point::moveTowards(const Point &other1, const Point &other2, double distance)
    {
        double diffX = 0.0, diffY = 0.0, res = 0.0;

        if(distance <= 0)
        {
            return other1;
        }

        res = other1.distance(other2);

        if(reso <= distance)
        {
            return other2;
        }

        diffX = other2._x - other1._x;
        diffY = other2._y - other1._y;

        return Point((other1._x + (diffX * res)), (other1._y + (diffY * res)));
    }
}