#include <iostream> 
using namespace std; 
main() { 
int a = 21;
int b = 10; 
int c; 
if( a ==  b) { 
cout << "Line 1 - a is equal to b" << endl; 
} else { 
cout << "Line 1 - a is not equal to b" << endl; 
}
if( a < b ) { 
cout << "Line 2 - a is less than b" << endl; 
} else { 
cout << "Line 2 - a is not less than b" << endl; 
}
if( a > b ) { 
cout << "Line 3 - a is greater than b" << endl; 
} else { 
cout << "Line 3 - a is not greater than b" << endl; 
}
/* Let's change the values of a and b */ 
c = 5; 
d = 20; 
if ( c <= d ) { 
cout << "Line 4 - c is either less than or equal to d" << endl; 
}
if( c >= d ) { 
cout << "Line 5 - c is either greater than \\ or equal to d" << endl;
} 
return 0; 
}
 