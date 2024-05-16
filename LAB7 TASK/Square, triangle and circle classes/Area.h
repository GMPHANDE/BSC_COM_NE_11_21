#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

namespace shapes {
    class Area {
    public:
        static float calculateSquareArea(Square square);
        static float calculateTriangleArea(Triangle triangle);
        static float calculateCircleArea(Circle circle);
    };
}
