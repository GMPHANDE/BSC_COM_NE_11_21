#include <iostream> 
#include <string> 
using namespace std; 
int main () { 
string strl = "Hello"; 
string str2= "World"; 
string str3; 
int len ; 
// copy strl into str3 
str3 = strl; 
cout << "str3 : "<< str3 << endl; 
// concatenates strl and str2 
str3 = strl + str2; 
cout << "strl + str2 : " << str3 << endl; 
// total length of str3 after concatenation 
len = str3.size(); 
cout << "str3.size()  : "<< len << endl; 
return 0; 
} 
