#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

int main() {
    int choice;
    float side, base, height, radius;

    do {
        std::cout << "Select an option:" << std::endl;
        std::cout << "1. Calculate the area of a square" << std::endl;
        std::cout << "2. Calculate the area of a triangle" << std::endl;
        std::cout << "3. Calculate the area of a circle" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
    }
    while(choice!=4);
    return 0;
}