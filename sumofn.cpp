#include<iostream>
using namespace std;

int sum(int n) {
    int x = 0;
    if(n > 0){
        x = sum(n - 1) + n;    
    }
    return x;
}

int main() {
    int n = 5;
    cout <<  sum(n);
    return 0;
}