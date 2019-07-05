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
    string author;
    string title;
    int amount;

    string setAuthor(string auth)
    {
        return author = auth;
    }
    string setTitle(string tit)
    {
        return title = tit;
    }
    void displayName()
    {
        cout << author << ", " << title << endl;
    }
    int setAmount(int amou)
    {
        if (amou = 0)
            cout << "You must enter valid number" << endl;
        else
        {
            return amount = amou;
        }

        return amount = amou;
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

void print(const string &item)
{
    cout << item << endl;
}

int main()
{
    cout << "List of Books:" << endl;
    Book Book1;
    string aut1 = "Tom Clancy";
    Book1.setAuthor(aut1);
    Book1.author = "";
    string tit1 = "\"Patriot Games\"";
    Book1.setTitle(tit1);
    Book1.displayName();
    Book1.setAmount(1);

    Book Book2;
    string aut2 = "Auel Jean";
    Book2.setAuthor(aut2);
    string tit2 = "\"Earth's Children\"";
    Book2.setTitle(tit2);
    Book2.displayName();
    Book2.setAmount(2);

    Book Book3;
    string aut3 = "Clarke Arthur";
    Book3.setAuthor(aut3);
    string tit3 = "\"3001 The final odissey\"";
    Book3.setTitle(tit3);
    Book3.displayName();
    Book3.setAmount(1);

    Book Books;
    Books = Book1 + Book2;
    Book AllBooks;
    AllBooks = Books + Book3;
    cout << "\nNumber of books in stock: " << AllBooks.amount << endl;

    cout << "\nAlphabetical sorting by author:" << endl;
    set<string> sortedBooks;
    sortedBooks.insert(Book1.author);
    sortedBooks.insert(Book2.author);
    sortedBooks.insert(Book3.author);

    for_each(sortedBooks.begin(), sortedBooks.end(), &print);

    vector<Book> Library;
    Library.push_back(Book1);
    Library.push_back(Book2);
    Library.push_back(Book3);

    return 0;
}