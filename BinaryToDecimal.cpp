/*
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int N;
    cin>>N;
    int dec=0, x=0, y=1;
    while(N!=0){
        x=N%10;
        dec=dec+y*x;
        N=N/10;
        y=2*y;
    }
    cout<<dec;
}
