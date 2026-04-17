#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        int last = N % 10;

        int first = N;
        while(first >= 10){
            first = first / 10 ;
        }

        cout<<"Sum = "<<first + last <<endl;
    }
    cout<<endl;
}