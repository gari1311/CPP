/*
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12
*/

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int N;
    cin>>N;
    int sum=0;
    while(N>1){
        if(N%2==0){
            sum=sum+N;
            N=N-1;
        }
        N=N-1;
    }
    cout<<sum;
  
}


