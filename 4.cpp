#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        int n = 1;

        cout<<"Case "<<n<<" : ";
        for(int i = 1 ; i <= N ; i++){
            if( N % i == 0){
                cout<<i<<" ";
            }
        }
        cout<<endl;
        n = n + 1;
    }
}