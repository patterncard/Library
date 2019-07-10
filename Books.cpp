#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <iostream>

using namespace std;

class Book
{
public:
    string title;
    string author;
    void setTitle(string tit)
    {
        title = tit;
    }
    void setAuthor(string auth)
    {
        author = auth;
    }
    string getName()
    {
        return author + " - " + title;
    }
};

class Reader
{
public:
    string name;
    string surname;
    void setName(string nam)
    {
        name = nam;
    }
    void setSurname(string sur)
    {
        surname = sur;
    }
    string getName()
    {
        return name + " " + surname;
    }
};

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

int main()
{
    Library Lib;
    bool run = 1;
    while (run != 0)
    {
        cout << "Choose option from menu:" << endl;
        cout << "1. Add book to library" << endl;
        cout << "2. Add user to library" << endl;
        cout << "3. Show all the books" << endl;
        cout << "4. Show all the users" << endl;

        cout << "0. Exit" << endl;

        int menuChoice;
        cin >> menuChoice;
        switch (menuChoice)
        {
        case 1:
        {
            Book Book1;
            string name;
            cout << "Enter author's name: " << endl;
            cin >> name;
            Book1.setAuthor(name);
            cout << "Author name is: " << Book1.author << endl;

            string title;
            cout << "Enter title of book: " << endl;
            cin >> title;
            Book1.setTitle(title);
            cout << "Title is \"" << Book1.title << "\"" << endl;

            Lib.addBook(Book1);
        }
        break;
        case 2:
        {
            Reader User;
            string name;
            cout << "Enter user's first name: " << endl;
            cin >> name;
            User.setName(name);
            cout << "User's first name is: " << User.name << endl;

            string surname;
            cout << "Enter user's surname: " << endl;
            cin >> surname;
            User.setSurname(surname);
            cout << "User's surname is " << User.surname << endl;

            Lib.addUser(User);
        }
        break;

        case 3:
        {
            Lib.printAllBooks();
        }
        break;
        case 4:
        {
            Lib.printAllUsers();
        }
        break;

        case 0:
        {
            run = 0;
        }
        break;
        default:
        {
            cout << "\nTry again\n"
                 << endl;
        }
        break;
        }
    }
}