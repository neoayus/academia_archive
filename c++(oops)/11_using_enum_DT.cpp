#include<iostream>
using namespace std ; 

enum shape {
    circle,
    rectangle, 
    triangle
} ; 
int main(){
    cout << "Enter shape code : " ; 
    int code ; 
    cin >> code ; 
    while(code >= circle && code <= triangle){
        switch(code){
            case circle : 
            cout <<" code was circle. " ; 
            break ; 
            case rectangle :
            cout << "Code was Rectangle " ; 
            break ; 
            case triangle :
            cout << "Code was Triangle " ; 
            break ; 
        }
        cout << "Enter Shape Code : " ; 
        cin >> code ; 
    } 
    cout << "BYE \n " ; 
    return 0 ; 
}