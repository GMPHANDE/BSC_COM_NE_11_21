
#pragma once

#include <iostream>
using namespace std;

class Box {
public:
      
      Box():
      
      Box(const double newLength, const double newBreadth, const double newHeight );
      
      ~Box();
      
      double Getvolume();
      
      void setLength(double len);
      
      void setBreadth(double bre);
      
      void setHeight(double hei);
      
      // Overload + operator to add two Box objects.
      Box operator+(const box& b);
      
     private:
            bouble length; // Length of a box
            bouble breadth; // Breadth of a box
            bouble height; // Height of a box
};