#include<iostream>
using namespace std;

namespace shapes {
    class Triangle {
    private:
        float base;
        float height;

    public:
        Triangle();
        Triangle(float b, float h);
        ~Triangle();

        void setBase(float b);
        void setHeight(float h);
        float getBase();
        float getHeight();
    };
}
