#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        string N;
        cin >> N;

        char last = N.back();
        if((last - '0') % 2 == 0) {
            cout << "even\n";
        }
        else {
            cout << "odd\n";
        }
    }

    return 0;
}