#include<iostream>
using namespace std;

namespace shapes {
    class Circle {
    private:
        float radius;

    public:
        Circle();
        Circle(float r);
        ~Circle();

        void setRadius(float r);
        float getRadius();
    };
}
