#include "Area.h"
#include <cmath>

namespace shapes {
    float Area::calculateSquareArea(Square square) {
        float side = square.getSideLength();
        return side * side;
    }

    float Area::calculateTriangleArea(Triangle triangle) {
        float base = triangle.getBase();
        float height = triangle.getHeight();
        return 0.5 * base * height;
    }

    float Area::calculateCircleArea(Circle circle) {
        float radius = circle.getRadius();
        return M_PI * radius * radius;
    }
}
