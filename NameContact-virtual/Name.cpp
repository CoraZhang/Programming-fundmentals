#include <iostream>
#include "Name.h"

using namespace std;

Name::Name() {
       cout << "Name   : in default constructor of " << this << endl;
       theName = new char [1];
       theName[0] = '\0';
}

Name::Name(const Name & n) {
       cout << "Name   : in copy constructor of " << this << endl;
       theName = new char[strlen(n.theName)+1];
       strcpy(theName, n.theName);
}

Name::Name(const char * newName) {
       cout << "Name   : in char constructor of " << this << endl;
       theName = new char[strlen(newName)+1];
       strcpy(theName, newName);
}

Name::~Name() {
       cout << "Name   : in destructor of " << this << endl;
       delete [] theName;
}

void Name::setName(const char * newName) {
       delete [] theName;
       theName = new char[strlen(newName)+1];
       strcpy(theName, newName);
}

Name & Name::operator=(const Name & rhs) {
       cout << "Name   : in operator= of " << this << endl;
       if (this == &rhs) return (*this);
       delete [] theName;
       theName = new char[strlen(rhs.theName)+1];
       strcpy(theName, rhs.theName);
       return (*this);
}

void Name::print() const {
       cout << theName << endl;
}


