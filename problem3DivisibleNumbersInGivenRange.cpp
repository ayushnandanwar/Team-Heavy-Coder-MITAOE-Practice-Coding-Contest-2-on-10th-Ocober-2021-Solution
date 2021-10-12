#include <iostream>

using namespace std;
/*
    Numbers in given range.

    Problem statement - Write a program to find how many numbers are there
                        in given range which are divisible by both given numbers.
                        (Write a function of four parameters). and print all those  
                        number and number of numbers.

*/

int checkDivisibilityInRange(int start,int end,int num1,int num2){
    int count = 0;
    for(int i = start;i <= end;i++){
        if(i%num1 == 0){
            cout << i <<" ";
        } 
    }
    cout <<endl;
    for(int i = start;i <= end;i++){
        if(i%num2 == 0){
            cout << i <<" ";
        } 
    }
    cout <<endl;
    for(int i = start;i <= end;i++){
        if(i%num1 == 0 && i%num2 == 0){
            cout << i <<" ";
            count += 1;
        } 
    }
    cout <<endl;
    return count;
}

int main(){
    int start,end;
    int num1,num2;
    cin >> start >> end;
    cin >> num1 >> num2;
    cout <<checkDivisibilityInRange(start,end,num1,num2);
}