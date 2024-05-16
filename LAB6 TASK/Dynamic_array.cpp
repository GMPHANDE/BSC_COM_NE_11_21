#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // To prompt the user to enter the dimensions of the array
    int rows, cols;
    cout << "Enter the number of rows (max 3): ";
    cin >> rows;
    cout << "Enter the number of columns (max 3): ";
    cin >> cols;

    // Enforcing the maximum dimensions of the array
    if (rows > 3 || cols > 3) {
        std::cout << "Invalid dimensions. Maximum dimensions allowed are 3x3." << endl;
        return 0;
    }

    // To dynamically allocate the 2-dimensional array
    double** dynamicArray = new double* [rows];
    for (int i = 0; i < rows; i++) {
        dynamicArray[i] = new double[cols];
    }

    // Assigning values to each element of the array using nested loops
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter a value for element [" << i << "][" << j << "]: ";
            cin >> dynamicArray[i][j];
        }
    }

    // Outputing the values of each element of the array
    std::cout << "Values of the 2-dimensional array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;
    }

    // To deallocate the dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}

