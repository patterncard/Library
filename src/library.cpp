#include <iostream>
#include "../include/library.h"

int bookAmount = 0;
int usersAmount = 0;

vector<Book> setOfBooks;
vector<Reader> setOfUsers;

int Library:: countBookAmount()
{
    return bookAmount;
}
int Library::amountOfUsers()
{
    return usersAmount;
}
void Library::addBook(Book book)
{
    setOfBooks.push_back(book);
    bookAmount = bookAmount + 1;
}
void Library::addUser(Reader user)
{
    setOfUsers.push_back(user);
    usersAmount = usersAmount + 1;
}
vector<Book> findAllBooks()
{
    return setOfBooks;
}
vector<Reader> findAllReaders()
{
    return setOfUsers;
}
void Library::printAllBooks()
{
    cout << "All books in library:\n"
         << endl;
    for (int i = 0; i < countBookAmount(); i++)
    {
        cout << setOfBooks[i].getName() << endl;
    }
}
void Library::printAllUsers()
{
    cout << "All users in library:\n"
         << endl;
    for (int i = 0; i < amountOfUsers(); i++)
    {
        cout << setOfUsers[i].getName() << endl;
    }
}