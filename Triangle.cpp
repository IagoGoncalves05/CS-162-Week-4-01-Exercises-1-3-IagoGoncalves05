#include "Triangle.h"

Triangle::Triangle(double base, double height) {
	this->base = base;
	this->height = height;
}
void Triangle::setBase(double base) {
	this->base = base;
}
void Triangle::setHeight(double height) {
	this->height = height;
}
double Triangle::getBase() {
	return base;
}
double Triangle::getHeight() {
	return height;
}
double Triangle::getArea() {
	return (0.5) * height * base;
}