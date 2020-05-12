/*
Print the following pattern for the given number of rows.
Pattern for N = 4



The dots represent spaces.



Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654
*/

#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int N, i=1;
    cin>>N;
    
    while(i<=N){
        int k=1;
        while(k<=N-i){
            cout<<" ";
            k++;
        }
        int j=1;
        int p=i;
        while(j<=i){
            cout<<p;
            p++;
            j++;
        }
        p=p-2;
        while(p>=i){
            cout<<p;
            p--;
        }
        cout<<endl;
        i++;
    }
    
}
