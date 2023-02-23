#include <iostream>
using namespace std; 
int main(){

    // int* p; //p is pointer that will point to a variable of datatype int
    // float* p1;  

    // int a = 10 ; 
    // p = &a;   

    // cout<<"address of a"<< p<<endl; 
    // cout<<"value at location of a: "<< *p<<endl; 


    int arr[10] = {3,4,6,7,8}; 
    for(int i = 0 ; i < 10 ; i++){
        cout<<arr+i<<" "<<*(arr+i)<<endl;
    }
    return 0;
}