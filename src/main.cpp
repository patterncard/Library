#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <iostream>
#include "../include/library.h"
#include "../include/reader.h"
#include "../include/book.h"

using namespace std;

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