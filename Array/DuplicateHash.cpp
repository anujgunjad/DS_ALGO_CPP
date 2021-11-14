#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,3,5,5};
    int len = sizeof(arr)/sizeof(arr[0]);

    int hash[len] = {0};

    for(int i = 0; i < len; i++){
        hash[arr[i]]++;
    }

    for(int i = 0; i < len; i++){
        if(hash[i] > 1){
            cout << i << " ";
        }
    }

    return 0;
}