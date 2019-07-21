#include <string>
#include <vector>
#include "book.h"
#include "reader.h"

using namespace std;

class Library
{
public:
    vector<Book> setOfBooks;
    vector<Reader> setOfUsers;

    int bookAmount = 0;
    int usersAmount = 0;

    int countBookAmount()
    {
        return bookAmount;
    }
    int amountOfUsers()
    {
        return usersAmount;
    }

    void addBook(Book book)
    {
        setOfBooks.push_back(book);
        bookAmount = bookAmount + 1;
    }
    void addUser(Reader user)
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

    void printAllBooks()
    {
        cout << "All books in library:\n"
             << endl;
        for (int i = 0; i < countBookAmount(); i++)
        {
            cout << setOfBooks[i].getName() << endl;
        }
    }
    void printAllUsers()
    {
        cout << "All users in library:\n"
             << endl;

        for (int i = 0; i < amountOfUsers(); i++)
        {
            cout << setOfUsers[i].getName() << endl;
        }
    }
};