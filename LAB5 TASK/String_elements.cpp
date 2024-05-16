#include<iostream>
using namespace std;
int main(){
    //String array declaration and initialisation
    string elements[]={"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    //Array size calculation
    int size = sizeof(elements)/sizeof(elements[0]);
    for(int i = 0; i<size; i++){
        if(elements[i][0] == 'B'){
            cout<<elements[i]<<endl;
        }
    }
    return 0;
} 
