#ifndef a5_library.hpp
#define a5_library.hpp

#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "a5_book_hpp"


using namespace std;

class Library {
    //private attributes
    vector<Book>my_collection;
    Book my_books;
    
public:
    //empty constructor
    Library();
    
    //paramtric constructor
    Library(vector<Book>new_collection, Book new_books);
    
    // service functions
    
    // checks if a book is existing and determines whether to insert/remove
    
    bool insert_books(vector<Book>my_collection, Book my_books);
    bool insert_books(string book_title, string book_authors, string date_of_publication, vector<Book>my_collection);
    bool book_removal(vector<Book>my_collection, Book my_books);
    bool book_removal(string book_title, string book_authors, string date_of_publication, vector<Book>my_collection);
    
    //prints the book collection and according information 
    void print(vector<Book>my_collection);
};

#endif /* a5_library.hpp */

