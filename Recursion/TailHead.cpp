#include<iostream>
using namespace std;

int fun(int n) {
    if(n > 0){
        fun(n - 1);
        cout << n <<endl;
    }
    return 0;
}

int main() {
    int x = 5;
    fun(x);
    return 0;
}