/* Assignment C++: 2
Author: Nathan Migdashiev, ID: 316147719
*/


#ifndef UNTITLED3_CIRCLE_H
#define UNTITLED3_CIRCLE_H
#include "Shape.h"

class Circle : public Shape{
protected:
    int radius;
public:
    Circle(char* color, int width, int radius);
    double getPerimeter();
    double getArea();
    void print();
    ~Circle();
};


#endif //UNTITLED3_CIRCLE_H
