/*
You are given an integer array containing only 0s, 1s and 2s. Write a solution to sort this array using one scan only.
You need to change in the given array itself. So no need to return or print anything.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Output Format :
Updated array elements in a single line (separated by space)
Constraints :
0 <= n <= 10^7
Sample Input 1:
7
0 1 2 0 2 0 1
Sample Output 1:
0 0 0 1 1 2 2 
Sample Input 2:
5
0 1 0 0 1
Sample Output 2:
0 0 0 1 1 
*/

#include <iostream>
#include <algorithm>
#include "solution.h"
using namespace std;


int main() {

	int size_first;

	cin>>size_first;
	int *arr_first=new int[1+size_first];	
	
	for(int i=0;i<size_first;i++)
		cin>>arr_first[i];
	
	sort012(arr_first,size_first);
		
	for(int i=0;i<size_first;i++)
		cout<<arr_first[i]<<" ";	
	return 0;
}

// arr - input array
// n - size of array

void sort012(int arr[], int n)  {  
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Taking input and printing output is handled automatically.
     */
int count0 = 0, count1 = 0, count2 = 0; 
    for (int i = 0; i < n; i++) { 
        if (arr[i] == 0) 
            count0++; 
        if (arr[i] == 1) 
            count1++; 
        if (arr[i] == 2) 
            count2++; 
    } 
  
    // Putting the 0's in the array in starting. 
    for (int i = 0; i < count0; i++)  
        arr[i] = 0; 
      
    // Putting the 1's in the array after the 0's. 
    for (int i = count0; i < (count0 + count1); i++)  
        arr[i] = 1; 
      
    // Putting the 2's in the array after the 1's 
    for (int i = (count0 + count1); i < n; i++)  
        arr[i] = 2; 
}
