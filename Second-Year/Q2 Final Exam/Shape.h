#ifndef SHAPE_H
#define SHAPE_H

constexpr double PI = 3.14159265358979323846;

class Shape {

public:
    virtual double GetArea() const = 0;
    virtual double GetPerimeter() const = 0;

    bool operator< (const Shape &itemToCompare);
    // Comparison operator. We define "shape A < shape B" as "Area of shape A < area of shape B". In other words,
    // shapes are sorted by the size of their area.
};

#endif //SHAPE_H
