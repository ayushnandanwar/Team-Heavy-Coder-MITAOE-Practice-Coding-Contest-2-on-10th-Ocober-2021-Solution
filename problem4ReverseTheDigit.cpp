/*
    Reverse The digits of a Number

    Problem Statement: Write a program to reverse the digits of a given number
                        and sum the reverse number and given number.
*/

#include <iostream>

using namespace std;

int main(){
    int n,last,rev = 0;
    cin >>n;
    int temp = n;

    while(n > 0){
        rev *= 10;
        last = n%10;
        rev +=last;
        n /= 10; 
    }
    cout <<rev <<endl;
    cout << rev +temp;
}