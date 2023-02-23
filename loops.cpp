#include <iostream> 
using namespace std; 

int main(){
    int i  = 5; 
    // while(i>0 ){
    //     cout<<" 10"<<endl;
    //     i = i-1; 
    // }

    // do{

    // }while(condition)

    // for(int j = 2; j <= 10 ; j= j+1){
    //     cout<<j<<endl;
    // }


    //nested for loop: example print a 2d array
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cout<<i<< " "<< j <<endl;
        }
    }


    return 0;
}