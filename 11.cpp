#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        long long total = 1;
        for(int i = 1 ; i <= n ; i++){
            total *= i ;
        }

        cout<<total<<endl;

    }
}