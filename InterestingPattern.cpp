/*
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
Input format :
N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 26
Sample Input 1:
8
Sample Output 1:
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
Sample Input 2:
7
Sample Output 2:
G
FG
EFG
DEFG
CDEFG
BCDEFG
ABCDEFG
*/

void printPatt(int n)
{
    //write your code here
    int i=1;
    
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+n+j-i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}
