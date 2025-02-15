#include<iostream>
using namespace std ; 

int main(){
    cout << "the operator on left is called insertion or 'put to' operator " ; 
    // it inserts the content of the variable on it's right to the object on it's left. 
    // above... COUT is an OBJECT, and that STRING is a VARIABLE 
    
    int x = 999 ; 
    cout << x ; // cout has an simple interface, if 'x' represent and integer then it will display it's content ; 
    // << is a bitwise left shift operator and it can still be used for that purpose. (this is the case of operator overloading) 

    printf("\n isn't it funny how printf still works in cpp") ; 

    return 0 ; 
}