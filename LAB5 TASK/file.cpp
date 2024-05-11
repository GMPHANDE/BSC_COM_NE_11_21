// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    //Create and open a text file
    ofstream file("input.txt");

    if(file.is_open())
    {
        file<<"This is the Advanced Computer Programming Module\n";
        file.close();
    }
    else
    {
        cout<<"Unable to open file";
    }
    return 0;
    }