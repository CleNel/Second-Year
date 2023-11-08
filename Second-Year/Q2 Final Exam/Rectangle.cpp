#include "Rectangle.h"

Rectangle::Rectangle(double width, double height)
	: width(width), height(height)
{}

double Rectangle::GetA() const{
	return width;
}

double Rectangle::GetB() const{
	return height;
}

void Rectangle::SetA(double width){
	this->width = width;
}

void Rectangle::SetB(double height){
	this->height = height;
}

double Rectangle::GetArea() const{
	return width * height;
}

double Rectangle::GetPerimeter() const{
	return width * 2 + height * 2;
}