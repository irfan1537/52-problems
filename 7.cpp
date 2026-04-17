#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
    int T;
    cin>>T;
    cin.ignore();
    while(T--){
        string s;
        getline(cin , s);
        stringstream ss(s);
        int num , count = 0;

        while(ss >> num){
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}