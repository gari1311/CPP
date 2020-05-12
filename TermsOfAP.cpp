/*
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
Input format :
Integer x
Output format :
Terms of series (separated by space)
Constraints :
1 <= N <= 1,000
Sample Input 1 :
10
Sample Output 1 :
5 11 14 17 23 26 29 35 38 41
Sample Input 2 :
4
Sample Output 2 :
5 11 14 17
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x;
    cin>>x;
    int counter=0;
    int N=1;
    while(counter!=x){
        int mul=3*N+2;
        if(mul%4!=0){
            cout<<mul<<" ";
            counter++;
        }
        N++;
    }
}
