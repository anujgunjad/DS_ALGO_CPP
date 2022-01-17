#include<bits/stdc++.h>
using namespace std;
/* 
    using ->     Bring a specific member from the namespace 
                 into the current scope.

    namespace -> A namespcae is declarative way that provides 
                 a scope to the identifiers inside it.
                     
                 identifiers -> the name of types,functions,
                                variables, etc.

    std ->       It is a namespace/library. 
*/

/*
    Recursion Syntax
    -------------------------
    type FunctionName(param){
        if(<base_condition){
            ........
            FunctionName(param);
            ........
        }
    } 
*/

void RecursiveNum(int n) {

    /*if(<base_condition>)*/
    if(n > 0){
        //Recursive Call
        RecursiveNum(n - 1);
        cout << n <<endl;
    }
}

/*
    Recursion has two faces
    1. Printing on returning time(Ascending Order)
    ->  RecursiveNum(n - 1);
        cout << n <<endl;
    
    Output -> 1 
              2 
              3 
              4

    2. Printing Before returning time(Descending Order)
    -> cout << n <<endl; 
       RecursiveNum(n - 1);   

    Output -> 4
              3
              2
              1
*/

int main() {
    //Print no. till n using recursion
    int n = 10;
    RecursiveNum(n);
    return 0;
}