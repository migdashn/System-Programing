/* Assignment C++: 2
Author: Nathan Migdashiev, ID: 316147719
*/


#include "Circle.h"
#include "cmath"
using namespace std;

Circle ::Circle(char *color, int width, int radius) : Shape(color,width), radius(radius){}

double Circle ::getPerimeter() {
    return radius*2*M_PI;
}
double Circle ::getArea() {
    return M_PI*radius*radius;
}

void Circle ::print() {
    cout << "Circle details:\n" << "color=" << color << ", width=" << width << ", radius=" << radius << endl;
    cout << "area=" << getArea() << ", perimeter=" << getPerimeter() << endl;
}

Circle :: ~Circle() {}
