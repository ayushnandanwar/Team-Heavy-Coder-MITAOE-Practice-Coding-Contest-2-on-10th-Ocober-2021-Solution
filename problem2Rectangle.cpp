#include <iostream>

using namespace std;
/*  
    Square
    Input: 
    8  7
    Output:
    *  *  *  *  *  *  *  
    *                 *  
    *                 *  
    *                 *  
    *                 *  
    *                 *  
    *                 *  
    *  *  *  *  *  *  *             
*/

int main(){
    int r,c;
    cin >> r>>c;
    for(int i=1;i<=r;i++){          // i - row 
        for(int j = 1;j <= c;j++){   // j - col
            if(i == 1){
                cout <<"*  ";
            }
            else if(i == r){
                cout <<"*  ";
            }
            else{
                if(j==1){
                cout <<"*  ";
                }
                else if(j==c){
                    cout <<"*  ";
                }
                else{
                    cout <<"   ";
                }
            }
        }
        cout <<endl;
    }

}
