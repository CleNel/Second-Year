#include "Circle.h"

Circle::Circle(double rad)
	: rad(rad)
{}

double Circle::GetR() const{
	return rad;
}

void Circle::SetR(double rad){
	this->rad = rad;
}

double Circle::GetArea() const{
	return PI * (rad * rad);
}

double Circle::GetPerimeter() const{
	return PI * rad * 2;
}