/*
Given a String s, check it its palindrome. Return true if string is palindrome, else return false.
Palindrome strings are those, where string s and its reverse is exactly same.
Input Format :
 String S
Output Format :
"true" if S is palindrome, else "false"
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1 :
abcdcba
Sample Output 1 :
true 
Sample Input 1 :
abcd
Sample Output 1 :
false
*/

#include<iostream>
using namespace std;
#include "Solution.h"

int main(){

  char str[10000];
  cin.getline(str,10000);

  if(checkPalindrome(str)){
  	cout << "true" << endl; 	
  }else{
  cout << "false" << endl;
  }
}

bool checkPalindrome(char str[]){


  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
int i1 = 0;
    int i2 = -1;
     for (int i = 0; str[i]!='\0'; i++) { 
     i2++;
     }
    while (i2 > i1) {
        if (str[i1] != str[i2]) {
            return false;
        }
        ++i1;
        --i2;
    }
    return true;
}
