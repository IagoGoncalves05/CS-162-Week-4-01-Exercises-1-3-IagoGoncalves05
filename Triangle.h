#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "GeometricObject.h"

class Triangle:public GeometricObject{
private:
    double base;
    double height;
public:
    Triangle();
    Triangle(double base, double height);
    void setBase(double base);
    void setHeight(double height);
    double getBase();
    double getHeight();
    double getArea();
};
#endif 