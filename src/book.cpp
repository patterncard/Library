#include <iostream>
#include "../include/book.h"
    
string title;
string author;

void Book::setTitle(string tit)
{
    title = tit;
}
void Book::setAuthor(string auth)
{
    author = auth;
}
string Book::getName()
{
    return author + " - " + title;
}