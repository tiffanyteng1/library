#include "library.hpp"
#include "book.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std; 

Library:: Library() : my_collection(0), my_books(''){} // string -- idk what to put there 

Library::Library(vector<book>new_collection, book new_books):
    my_collection(new_collection), my_books(new_books){}



void print(vector<book>my_collection){
    
    for(int index = 0; index < my_collection.size(); ++index) {

        cout << "Index:" << index << endl << endl; 

        cout << book::my_books.print(index); //parameters 
       
    }
}
// 2 versions: one w title, authors, and date of publication in string

bool insert_books (string title, string authors, string date_of_publication ){
    
    
    for(int index = 0; index < mycollection.size(); ++index) { // square brackets? 
      //iterates through the vector to check if a book with the same attribute already exists 
       if ((mycollection.title(index) == title) && (mycollection.authors(index) == authors) && ( mycollection.date_of_publication(index) == date_of_publication)) {  

           return false; 

       }
       // if it doesn't, then insert the book 
       else {
           my_collection.pushback(my_books); // or use the other function in here 
            return true; 

       }
    }
}

    // a book instance is passed
bool insert_books(vector<book>new_collection, book my_books){

    for(int index = 0; index < mycollection.size(); ++index) {
      
       if (my_books ==  my_collection[index]) {  

            return false; 

       }
       else {
            my_collection.pushback(my_books); // add the book at the end of the vector
            return true; 

       }
    }
    // if there is an existing book with the same details, if there is then insertion is rejection 

}

// 2 versions: one w title, authors, and date of publication in string
    // a book instance is passed

bool book_removal(vector<book>new_collection, book my_books){

     for(int index = 0; index < my_collection.size(); ++index) {

       if (my_books == new_collection[index]) // if the book is the same as an existing book then remove it 
            my_collection.erase(my_collection.begin() + index ); // erase the value?? 
            return true; 
       
       else {
           return false; 
       }

    }
    // search through the attribute and remove a book instance that matches the entered values 
    // if an instance is found and removed, it is true 


}

 bool book_removal(string title, string authors, string date_of_publication){
    for(int index = 0; index < my_collection.size(); ++index) {

       if ( (mycollection.title(index) == title) && (mycollection.authors(index) == authors) && ( mycollection.date_of_publication(index) == date_of_publication) ){
           mycollection.erase(my_collection.begin() + index; // erases it if there is a similar copy 
           return true;
       }
       else
       {
           return false; 
       }
       

    }
 }

    

