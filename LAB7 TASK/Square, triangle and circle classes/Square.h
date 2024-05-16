#include<iostream>
using namespace std;

namespace shapes {
    class Square {
    private:
        float sideLength;

    public:
        Square();
        Square(float side);
        ~Square();

        void setSideLength(float side);
        float getSideLength();
    };
}
