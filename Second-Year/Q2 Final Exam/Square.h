#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape {
    
private:
    double sideL;

public:
    Square(double sideL);

    double GetA() const;
    void SetA(double sideL);

    double GetArea() const override;
    double GetPerimeter() const override;
};
#endif //SQUARE_H
