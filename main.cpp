#include "GeometricObject.h"
#include "Triangle.h"
#include <iostream>

int main() 
{
   // Test code for Exercises 1-2
  Triangle t(5,10);
  t.setColor("purplicious");
  std::cout << "The " << t.toString() << " has an area of " << t.getArea() << " and is a beautiful hue of " << t.getColor() << std::endl;
  
  // Test code for Exercise 3 (uncomment after Exercise 2)
  GeometricObject::printObject(t);
}
