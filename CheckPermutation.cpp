*****************26.4/40******************
/*
Given two strings, S and T, check if they are permutations of each other. Return true or false.
Permutation means - length of both the strings should same and should contain same set of characters. Order of characters doesn't matter.
Note : Input strings contain only lowercase english alphabets.


Input format :
Line 1 : String 1
Line 2 : String 2
Output format :
'true' or 'false'
Constraints :
0 <= |S| <= 10^7
0 <= |T| <= 10^7
where |S| represents the length of string, S.
Sample Input 1 :
abcde
baedc
Sample Output 1 :
true
Sample Input 2 :
abc
cbd
Sample Output 2 :
false
*/

#include <iostream>
using namespace std;
#include "solution.h"

int main() {
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if(isPermutation(input1, input2) == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}

/ input1 - first input string
// input2 - second input string
bool isPermutation(char input1[], char input2[]) {
    // Write your code here
int count1 = 0;
    for (int i= 0; input1[i]!='\0'; i++){
        count1++;
    }
    int n1 = count1; 
    int count2 = 0;
    for (int i= 0; input2[i]!='\0'; i++){
        count2++;
    }
    int n2 = count2; 
  
    if (n1 != n2) {
      return false;
    }

    for (int i = 0; i < n1;  i++){
         if (input1[i] != input2[i]) {
                 return false;
       }
    } 
    return true; 
}
