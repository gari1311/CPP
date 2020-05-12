/*
Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input 1 :
3
Sample Output 1 :
1
23
345
*/

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int N;
    cin>>N;
    int i=1,k=1;
    
    while(i<=N){
        int j=1;
        k=i;
        while(j<=i){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
  
}

/*
Pattern 2
Print the following pattern
Pattern for N = 4
       1
     23
   345
 4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :
          1
        23
      345
    4567
  56789
*/

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int N;
    int i=1, l=1;
    cin>>N;
    
    while(i<=N){
        
        int k=1;
        while(k<=N-i){
            cout<<" ";
            k++;
        }
        l=i;
        int j=1;
        while(j<=i){
            cout<<l;
            l++;
            j++;
        }
        cout<<endl;
        i++;
    }
  
}


/*
Pattern 3

Print the following pattern
Pattern for N = 4



The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
*/

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int i=1;
    int N;
    cin>>N;
    while(i<=N){
        int k=1;
        while(k<=N-i){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=(2*i-1)){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
  
}
