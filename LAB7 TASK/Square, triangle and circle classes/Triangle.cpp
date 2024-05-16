#include "Triangle.h"

namespace shapes {
    Triangle::Triangle() {
        base = 0.0;
        height = 0.0;
    }

    Triangle::Triangle(float b, float h) {
        base = b;
        height = h;
    }

    Triangle::~Triangle() {
        // Do nothing for now
    }

    void Triangle::setBase(float b) {
        base = b;
    }

    void Triangle::setHeight(float h) {
        height = h;
    }

    float Triangle::getBase() {
        return base;
    }

    float Triangle::getHeight() {
        return height;
    }
}
