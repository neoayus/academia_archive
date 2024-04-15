#include<stdio.h>

void test() ; 

int main(){
    // static variable is declared using 'static' variable and it's value persists across multiple fuction calls. 
    
    // static int x = 5 ; 
    // printf("int x = %d \n",x); 

    test(); 
    return 0 ; 
}

void test(){
    static int y = 55 ; 
    printf("%d",y); 
}