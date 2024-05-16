#include "Square.h"

namespace shapes {
    Square::Square() {
        sideLength = 0.0;
    }

    Square::Square(float side) {
        sideLength = side;
    }

    Square::~Square() {
        // Do nothing for now
    }

    void Square::setSideLength(float side) {
        sideLength = side;
    }

    float Square::getSideLength() {
        return sideLength;
    }
}
