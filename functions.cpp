/* 
function declaration and definition 

try to show scope resolution with function
*/

#include <iostream>
using namespace std; 

// int add(int ,int );//declaration

int fact(int n){ 
    if (n==1) return n; 
    return n*fact(n-1);
}

int main(){

    int a = 3, b = 45; 
    int fac = fact(a);
    cout<<"factorial: "<<fac<<endl;
    return 0;
}




// 
/*
jmlasdkfj
dfadljf
d;lfkjs
*/

