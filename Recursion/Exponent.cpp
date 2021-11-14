#include<iostream>
using namespace std;

int pow(int m, int n){
    if(n==0){
        return 1;
    }
    return pow(m, n - 1) * m;
}

int powOptimize(int m, int n){
    if(n==0){
        return 1;
    } else if(n%2==0){
        return powOptimize(m * m, n/2);
    } else {
        return m * powOptimize(m * m , n/2);
    }
 }

int main() {
    cout << pow(2,9) <<endl;
    cout << powOptimize(2,10);
    return 0;
}