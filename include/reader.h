#include <string>
using namespace std;
#ifndef READER_H
#define READER_H

class Reader
{
public:
    string name;
    string surname;
    void setName(string nam);
    void setSurname(string sur);
    string getName();
};
#endif