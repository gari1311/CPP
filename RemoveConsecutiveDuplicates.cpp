/*
Given a string, S, remove all the consecutive duplicates that are present in the given string. That means, if 'aaa' is present in the string then it should become 'a' in the output string.
Input format :
String S
Output format :
Modified string
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
aabccbaa
Sample Output 1:
abcba
Sample Input 2:
xxyyzxx
Sample Output 2:
xyzx
*/

#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    removeConsecutiveDuplicates(input);
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
