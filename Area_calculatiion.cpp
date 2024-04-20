#include<iostream>
using namespace std;
//Function to calculate the area of a square
double calculateSquareArea(){
    double side;
    cout<<"Enter the side length of the square: ";
    cin>>side;
    return side * side;
   
}
//Function to calculate the area of a rectangle
void calculateRectangleArea(){
    double length,width;
    cout<<"Enter the length of the Rectangle: ";
    cin>>length;
    cout<<"Enter the width of the Rectangle: ";
    cin>>width;
    double area = length*width;
    cout<<"The area of the rectangle is: "<<area<<endl;
}
//Function to calculate the area of a triangle
void calculateTriangleArea(){
    double base,height;
    cout<<"Enter the base of the triangle: ";
    cin>>base;
    cout<<"Enter the height of the triangle: ";
    cin>>height;
    double area = 0.5*base*height;
    cout<<"The area of the triangle is: "<<area<<endl;
}
int main(){
    int choice;
    do{
         cout<<"Please select the area of the shape to calculate:"<<endl;  
         cout<<"1.Square"<<endl;
         cout<<"2.Rectangle"<<endl;
         cout<<"3.Triangle"<<endl; 
         cout<<"4.Quit program"<<endl;
         cout<<"Enter selection:";
         cin>>choice;
         switch(choice){
            case 1:{
              double area = calculateSquareArea();
             cout<<"The area of the square is: "<<area<<endl;
              break;
            }
            case 2:
              calculateRectangleArea();
              break;
            case 3:
              calculateTriangleArea();
              break;
            case 4:
              cout<<"Exiting the program."<<endl;
              break;
            default:
                cout<<"Invalid input.Please enter a valid  selection."<<endl;
         }

    }
    while (choice!=4);
    return 0;
}
