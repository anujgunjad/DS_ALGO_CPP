#include<iostream>
using namespace std;

int add(int a, int b) {
    int x = a ^ b;
    int carry = a & b;
    if(carry == 0) {
        return x;
    }
    else {
        return add(x, carry << 1);
    }
};

int main() {
    int a = 2, b = -3;
    cout <<  add(2,3);
    return 0;
}