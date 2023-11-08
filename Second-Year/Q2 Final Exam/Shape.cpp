#include "Shape.h"

bool Shape::operator<(const Shape &itemToCompare) {
    return GetArea() < itemToCompare.GetArea();
}
