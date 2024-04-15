#include<iostream>
using namespace std ; 

int main(){
    int a=4, b=3, c; 
    // c = (b++)+(++b)-(a--); 
    cout<<"OUTPUT IS :" << (--b)+(--b)+(b++)+(a--) ; 
    return 0 ;
}