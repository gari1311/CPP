/*
Given a String S of length n, print all its substrings.
Substring of a String S is a part of S (of any length from 1 to n), which contains all consecutive characters from S.
Input Format :
String S
Output Format :
 All Substrings of S, one in each line.
Constraints :
0 <= |S| <= 10^2
where |S| represents the length of string, S.
Note : The order in which you print substrings doesn't matter.
Sample Input 1 :
xyz
Sample Output 1 :
x
xy
xyz
y
yz
z
Sample Input 2 :
ab
Sample Output 2 :
a
b
ab
*/

#include<iostream>
using namespace std;
#include "Solution.h"

int main(){

  char str[10000];
  cin.getline(str,10000);

  printSubstrings(str);
}

void printSubstrings(char str[]){
  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   * Print output as specified in the question.
   */
    
    int count = 0;
    for (int i= 0; str[i]!='\0'; i++){
        count++;
    }
    int n=count;
for (int len = 1; len <= n; len++)  
    {     
        // Pick ending point 
        for (int i = 0; i <= n - len; i++)  
        { 
              
            int j = i + len - 1;             
            for (int k = i; k <= j; k++)  
                cout << str[k]; 
              
            cout << endl; 
        } 
    } 

}
