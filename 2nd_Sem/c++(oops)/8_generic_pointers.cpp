#include<iostream>
using namespace std ;

int main(){
    // void datatype had 2 uses so far, one as to be used as return type to return nothing and another is to indicate an empty argument list to a function.

    //WHAT IS A GENERIC POINTER ;

    void *gp ; // gp here is a generic pointer ; maybe generic pointers can be assigned a value of any basic data type. 
    // but can't be derefrenced for ex : 

    int *ip ; 
    gp = ip ; 
    // above statement is legit. while...

    // *ip = *gp ; //isn't. 

    // a void pointer can't be directly assigned to other type pointers in cpp, we need to use a cast operator hence
    void *ptr1 ;
    char *ptr2 ; 
    ptr2 /*= ptr1 */ ; // isn't valid in cpp... we need to use a cast operator. 

    ptr2 = (char*) ptr1 ; // is valid
    
    return 0 ; 
}