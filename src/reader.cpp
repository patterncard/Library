#include <iostream>
#include <string>
#include "../include/reader.h"

using namespace std;

    string name;
    string surname;

    void Reader::setName(string nam)
    {
        name = nam;
    }
    void Reader::setSurname(string sur)
    {
        surname = sur;
    }
    string Reader::getName()
    {
        return name + " " + surname;
    }