#include<bits/stdc++.h>
using namespace std;

/*
    Fibonacci Series -> 0 1 1 2 3 5 8 13...

    Mathematical Defination. 

              | 0                     n = 0   
    fib(n) =  | 1                     n = 1 
              | fib(n-2)+ fib(n-1)    n > 1

*/

void NormalFib(int n){
    int t1 = 0, t2 = 1, next = 0;
 
      for(int i = 1; i <= n; i++){
          // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        next = t1 + t2;
        t1 = t2;
        t2 = next;
        
        cout << next << ", ";       
      }
  
}

int main(){
    int n = 10;
    NormalFib(n);
    return 0;
}