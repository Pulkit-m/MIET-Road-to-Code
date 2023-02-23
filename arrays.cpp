/*
Declaring and Initializing an array
Taking array as input from the console
Getting Size of Array
Accessing the elements of an array
Modifying elements of an array
Multidimensional Arrays
*/

#include <iostream>
using namespace std; 


int main(){
    // declaring and initializing an array 
    // int arr[4] = {1,2,3,4};  


    // taking array input from console 
    int arr[4] = {1,2,3,4}; 
    // for(int i = 0 ; i < 4 ; i++){
    //     cin>>arr[i]; 
    // }

    //size of an array 
    cout<<sizeof(arr)/sizeof(int)<<endl;; 

    //Accessing elements of an array 
    // arr[i]
    //Modifying elements of an array 
    arr[2] = 34;
    //Multidimensional Arrays; 
    int arr2dim[3][2] =  {
        {1,2},
        {3,4},
        {5,6},
    };


    for(int i = 0 ; i < 4 ; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}