//
//  library.hpp
//  a5
//
//  Created by Tiffany Teng on 2020-11-19.
//  Copyright © 2020 Tiffany Teng. All rights reserved.
//

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
    vector<Book>my_books;
    
public:
    //constructors
    Library();
    
    Library(vector<book>new_books);
    
    //service functions
    void store_books(string my_books, vector<book>my_books);
    void print(string my_books);
}; 

#endif /* library_hpp */
