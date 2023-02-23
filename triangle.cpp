/*
Try to print this pattern on your console using c++ loops that we just covered: 
take n as input from the console 

n=1 
* 

n=2 
*
* * 

n=3 
*
* *
* * *

n=4 
*
* *
* * *
* * * * 

and so on


*/


#include <iostream>
using namespace std; 

int main(){

    int N ; 
    cin>> N; 
    scanf("speecify --- ")

    for(int i = 1 ; i <= N ; i++){
        for(int j = 0 ; j < i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}