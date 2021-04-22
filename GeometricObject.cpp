#include "GeometricObject.h"
#include "Triangle.h"
#include <iostream>

GeometricObject::GeometricObject()
{
  color = "white";
  filled = false;
}

GeometricObject::GeometricObject(const std::string& color, bool filled)
{
  this->color = color;
  this->filled = filled;
}

std::string GeometricObject::getColor() const
{
  return color;
}

void GeometricObject::setColor(const std::string& color)
{
  this->color = color;
}

bool GeometricObject::isFilled() const
{
  return filled;
}

void GeometricObject::setFilled(bool filled)
{
  this->filled = filled;
}

std::string GeometricObject::toString() const
{
  return "Geometric Object";
}

void GeometricObject::printObject(GeometricObject& g)
{
  std::cout << "Object Type: " << g.toString() << std:: endl;
  std::cout << "Color: " << g.getColor() << std:: endl;
  std::cout << "Filled: " << (g.isFilled() ? "Yes" : "No") << std:: endl;

  // Your code here

}