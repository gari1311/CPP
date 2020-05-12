/*
Given a random integer array. Sort this array using bubble sort.
Change in the input array itself. You don't need to return or print elements.


Input format :
Line 1 : Integer N, Array Size
Line 2 : Elements of the array separated by single space
Output format :
Elements of array in sorted order. Print them in a single line and space-separated
Constraints :
0 <= N <= 10^4
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28
Sample Input 2:
5
9 3 6 2 0
Sample Output 2:
0 2 3 6 9
*/

#include <iostream>
#include "solution.h"

using namespace std;

int main(){

	int size;
	cin>>size;

	int * input=new int[1+size];

	for(int i=0;i<size;i++)
		cin>>input[i];

	BubbleSort(input,size);
	
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";	

}	
// arr - input array
// n - size of array
void BubbleSort(int arr[], int n){
	// Write your code here
    
    for(int j=0; j<n-1; j++){
        
        for(int i=0; i<n-1-j; i++){
        
        if(arr[i]>arr[i+1]){
            int temp= arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        }
    }

}
