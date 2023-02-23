/*
Arithmetic operators: + - * / % ++ --  
Assignment Operator =  
Comparison Operators ==, !=, >=, <=, <, >  
Logical Operators && ||  !    [(statement1)LogicalOperator(statement2)]
*/  

#include <iostream>
using namespace std; 
int main(){

    int a = 10, b = 45;
    float c = 34; 
// Arithmetic operators
    // cout<<"sum: "<<a+b<<endl; 
    // cout<<"Difference: "<<a-b<<endl; 
    // cout<<"Product: " <<a*b<<endl; 
    // cout<<"Div: "<< a/b<<endl;


// Assignment Operators: 
    int ans = a/c;  
    // cout<<ans<<endl; 


    // comparison operators: 
    // int f = a==b; 
    // cout << f << endl;
    // cout<< (a<b) <<endl; 
    // cout<< (a>=b) <<endl; 
    // cout<< (a!=b) <<endl; 

// Logical operators: 
bool statement1 = true; 
bool statement2 = false ;
bool out = statement1 && statement2;
    cout<< out <<endl;



    return 0;
}


