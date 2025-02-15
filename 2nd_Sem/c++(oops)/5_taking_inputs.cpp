#include<iostream>
using namespace std ; 

int main(){

    float num1, num2, sum, average ; // declaring functions. 
    
    cout << "Enter two numbers : " ; // prompt 
    cin >> num1 ; // this ones an input operator. 
    cin >> num2 ; // reading numbers from keyboard. 

    sum = num1 + num2 ; 
    average = sum/2 ; 

    cout << "Sum = " << sum << "\n" ;
    cout << "Average = " << average << "\n" ; 
    // multiple use of '<<' operators is called CASCADING 

    return 0 ; 
}