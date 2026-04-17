#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int arr[2];
        for(int i = 0 ; i < 3 ; i++){
            cin>>arr[i];
        }
        int n = 3;
        sort(arr , arr + n);
        for(int i = 0 ; i < 3 ; i++){
            cout<<arr[i]<<" ";
        }
    }
}