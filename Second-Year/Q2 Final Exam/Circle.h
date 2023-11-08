#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {

private:
	double rad;

public:
	Circle(double rad);

	double GetR() const;
	void SetR(double rad);

	double GetArea() const override;
	double GetPerimeter() const override;
};
#endif //CIRCLE_H