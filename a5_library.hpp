#ifndef library_hpp
#define library_hpp

#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "book.hpp"

//1 parametric construcot --> takes as input a vector of Book objs --> stores vales from vector into vector attribute
//add default constructor w/ no param to initialize
// print() --> output books stored in library
//for each book instance, print book index inside vector + details in book::print()
using namespace std;

class Library {
    //private attributes
    vector<Book>my_collection;
    Book my_books;
    
public:
    //constructors
    Library();
    
    Library(vector<Book>new_collection, Book new_books);
    
    // service functions
    
    bool insert_books(vector<Book>my_collection, Book my_books);
    bool insert_books(string book_title, string book_authors, string date_of_publication);
    void print(vector<Book>my_collection);
    bool book_removal(vector<Book>my_collection, Book my_books);
    bool book_removal(string book_title, string book_authors, string date_of_publication);
};

#endif /* library_hpp */
