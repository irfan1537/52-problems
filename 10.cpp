#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int r1 , r2 , B ;
        cin>>r1>>r2>>B;
        double ballPlayed = 300 - B ;
        double c_over = ballPlayed / 6.0 ;
        double r_over = B / 6.0 ;
        double current_run_rate = r2 / c_over ;
        double req = (r1 + 1) - r2 ;
        double required_run_rate;
        if(r_over == 0){
            required_run_rate = 0; 
        }
        else{
            required_run_rate = req / r_over ;
        }
        cout<<fixed<<setprecision(2)
        <<current_run_rate<<" "
        <<required_run_rate<<endl;

    }
    return 0;
}