/*
Given an integer array(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. That is, if N = 5, the array constitutes values ranging from 0 to 3 and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.
Assume, duplicate number is always present in the given array.
Input format :
Line 1 : An integer N(size of the input array)
Line 2 : Array elements (separated by a single space)
Output Format :
Duplicate element
Constraints :
2 <= n <= 10^4
Sample Input 1:
9
0 7 2 5 4 7 1 3 6
Sample Output 1:
7
Sample Input 2:
5
0 2 1 3 1
Sample Output 2:
1
*/

#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    
	int size;
	cin >> size;
	int * input = new int[size + 1];
	
	for(int i = 0; i < size; i++) {
		cin >> input[i];
    }
	
	cout << DuplicateNumber(input, size);	
	
	return 0;
}

// arr - input array
// size - size of array

int MissingNumber(int arr[], int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int i, j; 
    
    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
        if(arr[i] == arr[j]) {
            return arr[i];
        }
        }
}
            

}
