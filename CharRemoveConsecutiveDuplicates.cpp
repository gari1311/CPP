/*
Given a string and a character x. Write a function to remove all occurrences of x character from the given string.
Leave the string as it is, if the given character is not present in the string.


Input Format :
Line 1 : String S
Line 2 : Character c
Output Format :
Modified string
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
welcome to coding ninjas
o
Sample Output 1:
welcme t cding ninjas
Sample Input 2:
Think of edge cases before submitting solutions
x
Sample Output 2:
Think of edge cases before submitting solutions
*/

#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(input, c);
    cout << input << endl;
}

// input - given string
// You need to update in the input string itself. No need to return or print anything

void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    int n = 0;
    for (int i= 0; input[i]!='\0'; i++){
        n++;
    }
 
   if (n < 2) 
     return; 
   
   int j = 0; 
  
   for (int i=1; i<n; i++) 
   { 
       if (input[j] != input[i]) 
       { 
           j++;  
           input[j] = input[i]; 
       }      
   }    
   j++; 
   input[j] = '\0'; 
}
