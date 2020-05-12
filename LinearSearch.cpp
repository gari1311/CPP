/*
Given a random integer array(Arr) and an element X. You need to search this element X in the given array using linear search. Return the index of the element in the input array.
Linear search means, we need to compare elements from the array one by one with the element X till we find the match or we reach the end of the array. If there is a match, return its index, and if not, return -1.
Indexing in the array starts from 0.
Input format :
Line 1 : Integer N(Array size)
Line 2 : Array elements (separated by a single space)
Line 3 : Element to be searched (i.e. X)
Output format :
Index of the element if it's found or 
-1 if it's not
Constraints :
0 <= n <= 10^7
Sample Input 1:
7
2 13 4 1 3 6 28
3
Sample Output 1:
4
Sample Input 2:
7
2 13 4 1 3 6 28
9
Sample Output 2:
-1
*/

#include <iostream>
#include "solution.h"

using namespace std;

int main() {
	
	int size,x;
	cin>>size;
	int *input=new int[1+size];
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	cin>>x;

	cout<<linearSearch(input,size,x);
	
	
	
	
	return 0;
}

// arr - input array
// n - size of array
// val - element to be searched

int linearSearch(int arr[], int n ,int val){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int x=-1;
    for(int i=0; i<n; i++){
        if(val==arr[i]){
            return i;
        }
    }
            return x;
}
