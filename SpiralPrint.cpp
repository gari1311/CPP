/*
Given an N*M 2D array, print it in spiral form. That is, first you need to print the 1st row, then last column, then last row and then first column and so on.
Print every element only once.
Input format :
Line 1 : N and M, No. of rows & No. of columns (separated by space) followed by N*M  elements in row wise fashion.
Output format :
Elements of matrix in spiral form in a single line and space separated
Constraints :
0 <= N <= 10^4
0 <= M <= 10^4
Sample Input 1:
 4 4 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
Sample Output 1:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
Sample Input 2:
 3 3 1 2 3 4 5 6 7 8 9
Sample Output 2:
1 2 3 6 9 8 7 4 5 
*/

#include <iostream>
using namespace std;
#include "solution.h"

int main() {
    int input[1500][1000];
    int row, col;
    cin >> row >> col;

    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    spiralPrint(input, row, col);
}

#include <iostream>
using namespace std;

void spiralPrint(int input[][1000], int m, int n){
	/* Don't write main().
	* Don't read input, it is passed as function argument.
	* Print output and don't return it.
	* Taking input is handled automatically.
	*/
int i, k = 0, l = 0; 
  
    /* k - starting row index  
        m - ending row index  
        l - starting column index  
        n - ending column index  
        i - iterator  
    */
  
    while (k < m && l < n) { 
        /* Print the first row from 
               the remaining rows */
        for (i = l; i < n; ++i) { 
            cout << input[k][i] << " "; 
        } 
        k++; 
  
        /* Print the last column  
         from the remaining columns */
        for (i = k; i < m; ++i) { 
            cout << input[i][n - 1] << " "; 
        } 
        n--; 
  
        /* Print the last row from  
                the remaining rows */
        if (k < m) { 
            for (i = n - 1; i >= l; --i) { 
                cout << input[m - 1][i] << " "; 
            } 
            m--; 
        } 
  
        /* Print the first column from 
                   the remaining columns */
        if (l < n) { 
            for (i = m - 1; i >= k; --i) { 
                cout << input[i][l] << " "; 
            } 
            l++; 
        } 
    } 
}

