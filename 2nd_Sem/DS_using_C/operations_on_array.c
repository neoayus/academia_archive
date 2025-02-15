#include<stdio.h>
int main(){

    // array can be traversed using for loop.

    // array size ; 
    int size ; 
    printf("Input the size of array :");
    scanf("%d",&size);

    // initializing an array 
    int myarr[size] ; 

    // taking input  
    for(int i=0; i<= size ; i++){
        printf("input the value at %d index :",i);
        scanf("%d",myarr[i]);
    }

    // printing an array. 
    for(int i=0; i<=size ; i++){
        printf("%d \t",myarr[i]);
    } 

    // finding minimum of array. 

    return 0 ; 
}