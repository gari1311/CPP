/*
Given a sorted integer array (in ascending order) and an element "VAL". You need to search this element "VAL" in the given input array using Binary Search. Return the index of element in the input.
Indexing starts from 0.
Return -1 if "VAL" is not present in the input array.


Input format :
Line 1 : Integer N, Array Size
Line 2 : Elements of the array separated by single space
Line 3 : Element to be searched (i.e. VAL)
Output Format :
Index of 'VAL' if found. Otherwise, '-1'
Constraints :
0 <= N <= 10^18
Sample Input 1:
7
1 3 7 9 11 12 45
3
Sample Output 1:
1
Sample Input 2:
7
1 2 3 4 5 6 7
9
Sample Output 2:
-1
*/

#include <iostream>
#include "solution.h"
using namespace std;

int main() {
	
	int size,val;
	cin>>size;
	int *input=new int[1+size];
	
	for(int i=0;i<size;i++)
		cin>>input[i];

	cin>>val;
	cout<<BinarySearch(input,size,val);
	return 0;
}

// arr - input array
// n - size of array
// val - element to be searched
int BinarySearch(int arr[], int n, int val){	
	int start= 0, end=n-1;
    int mid;
    int x=-1;
    
    while(start<=end){
    mid= (start+end)/2;  
    if(arr[mid]==val){
        return mid;
    }
    else if(arr[mid]<val){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    
    }
            return x;
}
