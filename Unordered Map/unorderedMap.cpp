#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {3,4,8,6,3,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int, int> freq;
    for (int i=0; i<n; i++)
        freq[arr[i]]++;
        
    unordered_map<int, int>:: iterator itr;

    for (itr=freq.begin(); itr!=freq.end(); itr++)
    { 
        cout << itr->first << " "<< itr->second<< endl;
    }

    return 0;
}