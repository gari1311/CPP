/*
You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,.......4,2.
Note: You need not print the array. You only need to populate it.
Input Format :
 Integer N
Output Format :
Elements of the array separated by single space(It has been taken care, need not worry)
Constraints :
1 <= n <= 10^6
Sample Input 1 :
6
Sample Output 1 :
 1 3 5 6 4 2
Sample Input 2 :
9
Sample Output 2 :
 1 3 5 7 9 8 6 4 2
*/

#include<iostream>
#include "Solution.h"
using namespace std;


int main(){
  int n;  
  cin >> n;
  
  int* arr = new int[n];
  arrange(arr,n);
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  delete arr;
}


void arrange(int arr[],int n){
 
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Arrange elements in the array "arr" given as input.
     Taking input and printing output is handled automatically.
  */
    int k=n;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            arr[k-1]=i;
             k=k-1;
        }
    }
    int l=0;
    for(int j=1; j<=n; j++){
        if(j%2!=0){
            arr[l]=j;
            l++;
        }
    }

}
