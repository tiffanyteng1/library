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
    book my_books; 
    
public:
    //constructors
    Library();
    
    Library(vector<book>new_collection, book new_books);
    
    // service functions 
    
    bool insert_books(vector<book>my_collection, book my_books);
    bool insert_books(string title, string authors, string date_of_publication);
    void print(vector<book>my_collection);
    bool book_removal(vector<book>new_collection, book my_books);
    bool book_removal(string title, string authors, string date_of_publication);  
}; 

#endif /* library_hpp */
