#include <iostream> 
using namespace std; 

int main(){
    // // if statement 
    int i = 20; 
    // if(i>0){
    //     cout<<"YES"<<endl;
    // } 

    // // if else 
    // if(i>0){
    //     cout<<"YES"<<endl;
    // }
    // else {
    //     cout<<"NO"<<endl;
    // }

    // // if - else if - else
    if(i>23){
        cout<<" YES"<<endl; 
    }
    else if(i<34){
        cout<<" LESS THan 34"<<endl;
    }
    else{
        cout<<" None"<<endl;
    } 


    // ternary statement 
    // variable = condition ? expressionTrue : expressionFalse;  
    int a = 3<5 ? 34:56;



    // break and continue later on
    

    return 0;
}

/*
Write a program to calculate discount price.  
Take input: prices of three items. 

Discount chart: bill less than 100 ⇒ discount = 5 
Bill grater than or equal to 100 but less than 200 ⇒ discount  = 15 
Bill greater than or equal to 200 but less than 500 ⇒ discount = 20  
Find which discount is applicable for the customer

*/