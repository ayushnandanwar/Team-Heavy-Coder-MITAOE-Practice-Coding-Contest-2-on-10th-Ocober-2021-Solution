#include <iostream>

using namespace std;
/*
    Selection sort 
    Problem Statement - Write a program to sort an integer array and count 
                        how many times elements get swapped.

*/
int main(){
    int n;
    cin >>n;
    int a[n];
    int count = 0;
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j = i +1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                count++;
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        cout << a[i] <<" ";
    }
    cout <<endl<<count;

}