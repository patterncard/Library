#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

class Book
{
public:
    string authorName;
    string authorSurname;
    string title;
    int amount;

    void setAuthorName(string name)
    {
        authorName = name;
    }
    void setAuthorSurname(string surname)
    {
        authorSurname = surname;
    }
    void setTitle(string tit)
    {
        title = tit;
    }
    void setAmount(int amou)
    {
        if (amou == 0)
        {
            cout << "You must enter a valid number" << endl;
        }
        else
        {
            amount = amou;
        }
    }
    void getAmout()
    {
        cout << amount << endl;
    }

    Book operator+(const Book &b)
    {
        Book book;
        book.amount = this->amount + b.amount;
        return book;
    }
};

class Library : public Book
{
public:
    void addingBooks(Book newBook)
    {
        vector<Book> shelf;
        shelf.push_back(newBook);
    }
    void sorting()
    {
    }
};

void print(const string &item)
{
    cout << item << endl;
}

int main()
{
    bool run = 1;
    while (run != 0)
    {
        Book newBook;
        Library Lib;
        cout << "Choose option from menu:" << endl;
        cout << "1. Add book to database" << endl;
        cout << "2. Store book in library" << endl;

        int menuChoice;
        cin >> menuChoice;
        switch (menuChoice)
        {
        case 1:
        {
            string name;
            cout << "Enter author's name: " << endl;
            cin >> name;
            newBook.setAuthorName(name);
            cout << "Author name is: " << newBook.authorName << endl;

            string surname;
            cout << "Enter author's surname:" << endl;
            cin >> surname;
            newBook.setAuthorSurname(surname);
            cout << "Author's surname is: " << newBook.authorSurname << endl;

            string title;
            cout << "Enter title of book: " << endl;
            cin >> title;
            newBook.setTitle(title);
            cout << "Title is \"" << newBook.title << "\"" << endl;

            int amount;
            cout << "Enter the number of copies of books:" << endl;
            cin >> amount;
            newBook.setAmount(amount);
            cout << "Number of copies: " << newBook.amount << endl;
        }
        break;
        case 2:
        {
            cout << "Adding a book..." << endl;
            vector<Book> lib;
            Lib.addingBooks(newBook);
            cout << "Book has been added" << endl;
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
    return 0;
}