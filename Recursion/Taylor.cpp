#include<iostream>
using namespace std;

double Taylor(int x, int n){
    static double p = 1, f = 1;
    double r = 0;
    if(n == 0) return 1;
    r = Taylor(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p/f;
}

int main() {
    cout << Taylor(1,10);
    return 0;
}