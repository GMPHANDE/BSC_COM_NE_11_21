#include <iostream>
#include <fstream>
using namespace std;
int main() {
    //To dynamically allocate an integer 
    int* dynaInt = new int;

    //To dynamically allocate a string 
    string* dynaString = new string;

    //Prompting the user to assign a value to the dynamically allocated integer 
    cout <<"Enter a value for the integer: ";
    cin >> *dynaInt;

    //Prompting the user to assign a value to the dynamically allocated string 
    cout <<"Enter a value for the string: ";
    cin.ignore();
    getline(cin,*dynaString);

    //To output the value of the dynamically allocated integer 
    cout <<"Value of the dynmically allocated integer: "<< *dynaInt <<endl;

    //To output the value of the dynamically allocated string 
    cout <<"Value of the dynmically allocated string: "<< *dynaString <<endl;

    //To deallocate the value of the dynamically allocated integer
    delete dynaInt;

    //To deallocate the value of the dynamically allocated string
    delete dynaString;

    return 0;
}