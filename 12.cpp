#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        long long count = 0;

        while(N > 0){
            N /= 5;
            count += N;
        }
        cout<<count<<endl;
    }
    return 0;
}