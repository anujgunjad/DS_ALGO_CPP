/*
  Printing Squre using Recursion 
  Static Variable
*/
#include<bits/stdc++.h>
using namespace std;

int RecursiveTable(int n){
    //Every Recursive call use same 
    //copy of x.
    static int x = 0;
    
    if( n > 0){
        x++;
        return RecursiveTable(n - 1) + x;
    }
    return 0;
}

int main(){
    int n = 1245;
    cout << RecursiveTable(n) << endl;
    return 0;
}