#ifndef POINT_H
#define POINT_H

class Point {
   int x, y;

public:
   Point(int x = 0, int y = 0);
   int returnX() const;
   int returnY() const;
   void setX(int x);
   void setY(int y);
   void print() const;
   bool isorigin() const;
   const Point operator+(const Point & r) const;

};

#endif
