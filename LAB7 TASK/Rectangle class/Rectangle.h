#include<iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();
    Rectangle(float l, float w);
    ~Rectangle();

    void setLength(float l);
    void setWidth(float w);

    float getLength();
    float getWidth();

    float calculateArea();
};
