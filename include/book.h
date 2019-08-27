#pragma once
#include <string>

using namespace std;

#ifndef BOOK_H
#define BOOK_H

class Book
{
public:
    string title;
    string author;
    void setTitle(string tit);
    void setAuthor(string auth);
    string getName();
};
#endif