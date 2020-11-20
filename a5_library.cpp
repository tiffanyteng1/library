#include "library.hpp"
#include "a5_book.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Library:: Library() : my_collection(0), my_books(){} // string -- idk what to put there

Library::Library(vector<Book> new_collection, Book new_books):
    my_collection(new_collection), my_books(new_books){}



    void Library:: print(vector<Book>my_collection){
    
        for(int index = 0; index < my_collection.size(); ++index) {

            cout << "Index:" << index << endl << endl;

            cout << Book:: print(); //parameters
       
    }
}
// 2 versions: one w title, authors, and date of publication in string

    bool Library:: insert_books (string book_title, string book_authors, string date_of_publication ){
    
    
        for(int index = 0; index < my_collection.size(); ++index) { // square brackets?
      //iterates through the vector to check if a book with the same attribute already exists
            if ((my_collection.get(index).title == title) && (my_collection.authors(index) == authors) && ( my_collection.date_of_publication(index) == date_of_publication)) {

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
bool Library::insert_books(vector<Book>new_collection, Book my_books){

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

bool Library::book_removal(vector<Book>new_collection, Book my_books){

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

 bool Library::book_removal(string book_title, string book_authors, string date_of_publication){
    for(int index = 0; index < my_collection.size(); ++index) {

       if ( (my_collection.title(index) == title) && (my_collection.authors(index) == authors) && ( my_collection.date_of_publication(index) == date_of_publication) ){
           my_collection.erase(my_collection.begin() + index; // erases it if there is a similar copy
           return true;
       }
       else
       {
           return false;
       }
       

    }
 }
    

///edits -------------------------------------------------------------------------

#include "a5-library.hpp"
#include "a5-book.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Library::Library() : my_collection(0), my_books() {} // string -- idk what to put there

Library::Library(vector<Book> new_collection, Book new_books) :
    my_collection(new_collection), my_books(new_books) {}



void Library::print(vector<Book>my_collection) {

    for (int index = 0; index < my_collection.size(); ++index) {

        cout << "Index:" << index << endl << endl;

        my_collection[index].print(); //parameters

    }
}
// 2 versions: one w title, authors, and date of publication in string

bool Library::insert_books(string book_title, string book_authors, string date_of_publication) {


    for (int index = 0; index < my_collection.size(); ++index) { // square brackets?
  //iterates through the vector to check if a book with the same attribute already exists
        if ((my_collection[index].get_title() == book_title) && (my_collection[index].get_author() == book_authors) && ((my_collection[index].get_dob() == date_of_publication)) {

            return false;

        }
        // if it doesn't, then insert the book
        else {
            my_collection.push_back(my_books); // or use the other function in here
            return true;

        }
    }
}

// a book instance is passed
bool Library::insert_books(vector<Book>new_collection, Book my_books) {

    // Check if my_books is in my_collection
    if (find(my_collection.begin(), my_collection.end(), my_books) == my_collection.end()) {
        my_collection.push_back(my_books); //book gets added onto back
        return true;
    }
    else {
        return false;
    }
        

  
    // if there is an existing book with the same details, if there is then insertion is rejection


}

// 2 versions: one w title, authors, and date of publication in string
    // a book instance is passed

bool Library::book_removal(vector<Book>new_collection, Book my_books) {

    if (find(my_collection.begin(), my_collection.end(), my_books) == my_collection.end()) {
        my_collection.erase(my_collection.begin()); // erase the value??
        return true;
    }
    else {
        return false;
    }

    // search through the attribute and remove a book instance that matches the entered values
    // if an instance is found and removed, it is true
}

bool Library::book_removal(string book_title, string book_authors, string date_of_publication) {
    for (int index = 0; index < my_collection.size(); ++index) {

        if ((my_collection[index].get_title() == book_title) && (my_collection[index].get_author() == book_authors) && ((my_collection[index].get_dob() == date_of_publication)) {
            my_collection.erase(my_collection.begin() + index); // erases it if there is a similar copy
            return true;
        }
        else
        {
            return false;
        }

    }
}