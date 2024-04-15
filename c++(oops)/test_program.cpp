#include<iostream>
using namespace std ; 

int main(){
    float temp, celcius ; 

    cout << "input the temp in fahrenheit : " ; 
    cin >> temp ; 

    celcius = (temp-32)*5/9 ; 

    cout <<"Temperature in celcius is : " << celcius ; 
     
    return 0 ; 
}