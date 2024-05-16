#include<iostream>
#include<string>
#include<limits>
using namespace std;
int main(){
    int Ivalue;
    while (true){
        cout<<"Enter an integer value between 5 and 10 "<<endl;
        //Read Ivalue from the console inputed as a digit
        cin>>Ivalue;
      while(cin.fail() || Ivalue < 5 || Ivalue >10){
             //The program clears the state of cin if Ivalue is not valid
            cin.clear();
            //Ignore any remaining characters in the input buffer
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
             //Outputs an error message
             cout<<"Sorry, you entered an invalid number please try again "<<endl;
             cin>>Ivalue;
             cout<<"You entered "<<Ivalue<<". Please enter an integer value between 5 and 10."<<endl;
             cin>>Ivalue;
      }
      if(Ivalue>=5&&Ivalue<=10){
           //Loop exists if Ivalue is valid
            break;
      }
    }
    cout<<"Your input value(" <<Ivalue<< ") has been accepted.";
    return 0;
}