#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>

class GeometricObject
{
public:
  GeometricObject();
  GeometricObject(const std::string& color, bool filled);
  std::string getColor() const;
  void setColor(const std::string& color);
  bool isFilled() const;
  void setFilled(bool filled);
  std::string toString() const; 
  static void printObject(GeometricObject& g);
  virtual double getArea() = 0;
private:
  std::string color;
  bool filled;
}; // Must place semicolon here

#endif 
