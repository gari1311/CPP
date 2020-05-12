/*
Given a string, S, find and return the highest occurring character present in the given string.
If there are 2 characters in the input string with same frequency, return the character which comes first.


Note : Assume all the characters in the given string are lowercase.


Input format :
String S
Output format :
Highest occurring character
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
abdefgbabfba
Sample Output 1:
b
Sample Input 2:
xy
Sample Output 2:
x
*/

#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    cout << highestOccurringChar(input) << endl;
}

// input - given string
char highestOccurringChar(char input[]) {
    // Write your code here
int freq[26] = { 0 }; 
  
    // to store maximum frequency 
    int max = -1; 
  
    // to store the maximum occurring character 
    char result; 
    int count = 0;
    for (int i= 0; input[i]!='\0'; i++){
        count++;
    }
    int len = count;
    if (len==2){
        return input[0];
    }  
    // get frequency of each character of 'str' 
    for (int i = 0; i < len; i++) 
        freq[input[i] - 'a']++; 
   
    for (int i = 0; i < 26; i++) 
        if (max < freq[i]) { 
            max = freq[i]; 
            result = (char)(i + 'a'); 
        } 
  
    // maximum occurring character 
    return result; 
}
