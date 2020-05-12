/*
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note : The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.


Input format :
Integer N
Output format :
Corresponding Binary number (long)
Constraints :
0 <= N <= 10^5
Sample Input 1 :
12
Sample Output 1 :
1100
Sample Input 2 :
7
Sample Output 2 :
111
*/


#include<iostream>
using namespace std;

int main() {
	// Write your code here
	long N, i, j, bin=0;
//int binno=0;
    cin>>N;

     i=1;

      for(j=N;j>0;j=j/2)
       {
        bin=bin+(N%2)*i;
        i=i*10;
        N=N/2;
       }
    //binno=bin;
     
    cout<<bin;
}
