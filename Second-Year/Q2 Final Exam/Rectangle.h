#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
   
private:
	double width;
	double height;

public:
	Rectangle(double width, double height);

	double GetA() const;
	double GetB() const;
	void SetA(double width);
	void SetB(double height);

	double GetArea() const override;
	double GetPerimeter() const override;
};
#endif //RECTANGLE_H
