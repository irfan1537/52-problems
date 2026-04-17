#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        bool isperfect = false;
        for(int i = 1 ; i * i <= N ; i++){
            if(i * i == N){
              isperfect = true;
              break;  
            }
        }
        if(isperfect){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}