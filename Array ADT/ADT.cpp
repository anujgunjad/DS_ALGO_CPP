#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};



int main(){
    struct Array arr;

    cout << "Enter size of an array" << endl;
    cin >> arr.size;

    arr.A = new int[arr.size];
    arr.length = 0;

    

    return 0;
}