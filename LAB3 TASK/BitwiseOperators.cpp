#include <iostream> using namespace std; 
main() { 
unsigned int a = 60;// 60 =  0011 1100 
unsigned int b = 13; // 13 = 0000 1101 
int c = 0; 

C = a & b; // 120000 1100 
cout << "Line 1 - Value of c is : " << C << endl; 
c = a | b; // 61 = 0011 1101 
cout << "Line 2 - Value of c is : " << C << endl; 
C = a ^ b;// 49 = 0011 0001                                                                                                                                                                                                                                                                                                                      
cout << "Line 3 - Value of c is : " << C << endl; 
C = ~a; // -61 = 1100 0011 
cout << "Line 4 - Value of c is : " << C << endl; 
C = a << 2; // 240 1111 0000 
cout << "Line 5 - Value of c is : " << C << endl; 
c = a >> 2; // 15 0000 1111 
cout << "Line 6 - Value of c is : " << C << endl; 
return 0; 
}



