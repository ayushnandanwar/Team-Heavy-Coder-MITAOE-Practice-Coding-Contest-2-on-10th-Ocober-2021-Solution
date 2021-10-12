#include <iostream>
using namespace std;
// problem 1. ATM Machine (tax = 5%, 10%, 15%, 20%)   
//                               500 1000 5000 10000
/*    
    Problem Statement: Write a program for an ATM machine which perform only withdrawl operation
                        with taxes. Conditions are as follow
                        1. withdrawl amount < 500 then no taxes
                        2. withdrawl amount > 500 then 5% taxes
                        3. withdrawl amount > 1000 then 10% taxes
                        4. withdrawl amount > 5000 then 15% taxes
                        5. withdrawl amount > 10000 then 20% taxes
                Note: Bal cannot be 0. if this happen then balance will not deducted and print current balance only.
                After performing operation print balance amount only.

*/
int main(){
    float with,bal;
    cin >>with >> bal;
    if(with >= bal){
        cout <<"Bal: "<<bal<<endl;
    }
    else if(with > 10000 && bal - with - 0.20*with > 0){
        bal = bal - with - 0.20*with;
        cout <<"Bal: "<<bal<<endl;    
    }
    else if(with > 5000 && bal - with - 0.15*with > 0){
        bal = bal - with - 0.15*with;
        cout <<"Bal: "<<bal<<endl;    
    }
    else if(with > 1000 && bal - with - 0.1*with > 0){
        bal = bal - with - 0.1*with;
        cout <<"Bal: "<<bal<<endl;    
    }
    else if(with > 500 && bal - with - 0.05*with > 0){
        bal = bal - with - 0.05*with;
        cout <<"Bal: "<<bal<<endl;    
    }
    else if(with <500 ){
        bal = bal - with;
        cout <<"Bal: "<<bal<<endl;
    }
    else{
        cout <<"Bal: "<<bal<<endl;
    }
}