//Finding duplicates
#include<iostream>
using namespace std;

//Order of O(n^2)
int Dupicate(int a[], int n){
    for(int i = 0; i < n; i++){
        int count = 1;
        if(a[i] != -1){
        for(int j = i + 1; j < n; j++){
                if(a[i] == a[j]){
                    count++;
                    a[j] = -1;
                }
            }
            if(count > 1) cout << a[i] << " " << count << endl;
        }
    }
    return 0;
}

int main() {
    int arr[] = {1,3,4,5,6,7,8,8,8,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    Dupicate(arr, len);
    return 0;
}