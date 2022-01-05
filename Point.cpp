#include "Point.h"
using namespace std;

Point::Point(double a = 0, double b = 0, double c = 0)
    :x(a), y(b), z(c)
{

};
bool Point::operator==(const Point& p) {
    if (p.x == x && p.y == y && p.z == z)
        return true;
    return false;
};