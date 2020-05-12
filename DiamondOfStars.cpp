/*
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5



The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
*/

void printPatt(int n)
{
    //write your code here
    int i=1;
    
    while(i<=n/2+1){
        int k=1;
        while(k<=n/2-i+1){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=2*i-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    while(i>n/2+1&&i<=n){
        int k=1;
        while(k<=i-n/2-1){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=2*n-2*i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}
