
#include "Point.h"
#include <iostream>
using namespace std;


Point::Point(int x, int y) : x(x), y(y) { }


int Point:: returnX() const { return x; }
int Point::returnY() const { return y; }


void Point::setX(int x) { this->x = x; }
void Point::setY(int y) { this->y = y; }


void Point::print() const {
   cout << x << "," << y <<endl;
}


const Point Point::operator+(const Point & r) const {
   return Point(x + r.x, y + r.y);
}

bool Point::isorigin() const
{

if()
}
