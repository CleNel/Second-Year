#include "Square.h"

Square::Square(double sideL)
	: sideL(sideL)
{}

double Square::GetA() const{
	return sideL;
}

void Square::SetA(double sideL){
	this->sideL = sideL;
}

double Square::GetArea() const {
	return sideL * sideL;
}

double Square::GetPerimeter() const{
	return sideL * 4;
}