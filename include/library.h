#include <string>
#include <vector>
#include "book.h"
#include "reader.h"

using namespace std;

#ifndef LIBRARY_H
#define LIBRARY_H

class Library
{
public:
    int countBookAmount();
    int amountOfUsers();

    void addBook(Book book);
    void addUser(Reader user);

    vector<Book> findAllBooks();
    vector<Reader> findAllReaders();

    void printAllBooks();
    void printAllUsers();
};
#endif