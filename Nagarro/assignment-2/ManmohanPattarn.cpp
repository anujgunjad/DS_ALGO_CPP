#include<bits/stdc++.h>
using namespace std;

//input: 5
//1
//11
//202
//3003
//40004
//500005
int main(){
    int n = 5;
    cout<<1<<endl;
    for(int i = 1; i < n; i++){

        for(int j = 1; j <= i + 1; j++) {
            if(j == 1 || j == i + 1){
                cout<<i;
            }
            else {
                cout<<0;
            }
        }
        
        cout << endl;
    }
    return 0;
}
