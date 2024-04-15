#include<iostream> 
using namespace std ; 

// structures are user defined data types to group together disimilar data. 
struct book{
    char title[25] ; 
    char author[25] ; 
    int pages ; 
    float price ; 
}/* we can use an alias here to use a short name for this datatype */; 

// Unions ara Conceptually similar to structures but the size of a union is equal to the size of it's largest number.
union result {
    int marks ; 
    char grade ; 
    float precent ; 
}/*alias here*/; 

int main(){
    book book1, book2, book3, book4 ; 
    book1.pages = 50 ; 
    cout << "book 1 has " << book1.pages << " pages"  ; 
    
    // idk how to access data from unions ; 
    
    return 0 ; 
}