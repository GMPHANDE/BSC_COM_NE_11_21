#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
// Function to calculate the number of words in a string
int countWords(const string& str){
int count = 0;
bool inWord = false;

for (char c : str) {
if (isspace(c)) {
inWord = false;
}else {
if (!inWord) {
count++;
inWord = true;
    }
  }
} 
return count;
 }
// Function to count the number of vowels in a string
int countVowels(const string& str) {
int count = 0;
for (char c:str) {
if (tolower(c) == 'a' || tolower(c) =='e' || tolower(c) =='i' || tolower(c) == 'o' || tolower(c) =='u'){
count++;
 }
}
return count;
}

// Function to reverse a string
string Reverse(const string& str) {
string reversed = str;
reverse(reversed.begin(),reversed.end());
return reversed;
}
// Function to capitalize the second letter of each word in a string
string capitalizeSecondLetter(const string& str) {
string result = str;
bool capitalize = false;
for (char& c:result) {
if (isspace(c)) {
capitalize = true;
}else if (capitalize) {
c= toupper(c);
capitalize = false;
}
}
return result;
}

int main(){
ifstream file("input.txt");

if (file.is_open()) {
string fileData;
getline(file, fileData);

cout << "Number of words in the text file statement:" <<
countWords(fileData) << endl;
cout << "Number of vowels in the text file statement:" <<
countVowels(fileData) << endl;

cout << "Reversed statement:"<< Reverse(fileData) << std::endl;

cout << "Capitalizing the fuctionality: "<<capitalizeSecondLetter(fileData)<<endl;
}
return 0;
}











