#include<bits/stdc++.h>
using namespace std;

int find(int arr[], int len, int seek)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] == seek) return i;
    }
    return -1;
}

bool areEqual(int arr1[], int arr2[], int n)
{
    
    // Sort both arrays
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
 
    // Linearly compare elements
    for (int i = 0; i < n; i++)
        if (arr1[i] != arr2[i])
            return false;
 
    // If all elements were same.
    return true;
}

int main() {
    // vector<int> arr1{4,0,2,1,3};
    // for(auto ir = arr1.begin(); ir != arr1.end(); ++ir)
    //     cout << *ir <<endl;
    int arr1[] = {4,0,2,1,3};
    int size = sizeof(arr1)/sizeof(arr1[0]);

    int *arr2 = new int[size];

    for(int i = 0; i < size; i++){
        arr2[i] = find(arr1,size, i);
    }

    for(int i = 0; i < size; i++){
        cout << arr2[i] << " ";
    }

    return 0;
}