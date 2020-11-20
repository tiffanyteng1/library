
#include "a5_library.hpp"
#include "a5_book.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// implicitly sets methods
Library::Library() : my_collection(0), my_books() {}

Library::Library(vector<Book> new_collection, Book new_books) :
    my_collection(new_collection), my_books(new_books) {}


// print out the book index with its information
void Library::print(vector<Book>my_collection) {

    for (int index = 0; index < my_collection.size(); ++index)
    {

        cout << "Index:" << index << endl << endl;

        my_collection[index].print();

    }
}

// PURPOSE: checks if an existing book is found with the given attributes and if not, it will insert the book into the collection

bool Library::insert_books(string book_title, string book_authors, string date_of_publication, vector<Book>my_collection) {
   
    bool book_found = false;
    
    if (book_found){
        
        for (vector<Book>::iterator it = my_collection.begin(); it != my_collection.end(); ++it)
        {

            // checks if a book with the same attributes exists
            if ((it->get_title() == book_title) && (it->get_author() == book_authors) && (it->get_dob() == date_of_publication))
            {
                
                book_found = false;

            }
            // if it does not exist then insert the book
            else {
                my_collection.push_back(my_books); // has to insert the attributes to the object first, and then add it so idk how this one would work
                book_found = true;
            }
            }
        // if the book is still not found and was inserted, return true
        return true;
    }
   
    else
        return false;
    
}

// PURPOSE: checks if a book exists in the collection when a book instance is passed
bool Library::insert_books(vector<Book>new_collection, Book my_books) {

    // Check if my_books is in my_collection
    if (find(my_collection.begin(), my_collection.end(), my_books) == my_collection.end())
    {
        //book gets added into my_collection if it is not exisitng
        my_collection.push_back(my_books);
        return true;
    }
    else {
        // if existing, insertion is rejected
        return false;
    }
        
}


// PURPOSE: checks if a book is existing and if it needs to be removed with a book instance passed
bool Library::book_removal(vector<Book>new_collection, Book my_books) {

    // check if the instance is in the collection
    if (find(my_collection.begin(), my_collection.end(), my_books) == my_collection.end())
    {
        my_collection.erase(my_collection.begin()); // erase it if it exists and return true
        return true;
    }
    else {
        return false;
    }

}

// PURPOSE: checks if a book is existing and if it needs to be removed with a book attributes
bool Library::book_removal(string book_title, string book_authors, string date_of_publication, vector<Book>my_collection) {
    
    bool book_found = false;
    
    //if book is not found then iterate through vector to see if one with matching attributes exists
    if (book_found)
    {
        
        for (vector<Book>::iterator it = my_collection.begin(); it != my_collection.end(); it++) {

            if ((it->get_title() == book_title) && (it->get_author() == book_authors) && (it->get_dob() == date_of_publication))
            {
                my_collection.erase(it); // erases it if there is a similar copy
                book_found = true;
            }
            else
                book_found = false;
        }
        // if the book is not found, then a book was not removed --> return false
        return false;
    }
    else
        return true;
}
    


