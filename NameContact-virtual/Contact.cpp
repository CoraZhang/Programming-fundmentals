#include <iostream>
#include "Contact.h"

using namespace std;

Contact::Contact() {
       cout << "Contact: in default constructor of " << this << endl;
       theAddress = new char [1];
       theAddress[0] = '\0';
}

Contact::Contact(const Contact & c) : Name(c) {
       cout << "Contact: in copy constructor of " << this << endl;
       theAddress = new char[strlen(c.theAddress)+1];
       strcpy(theAddress, c.theAddress);
}

Contact::Contact(const char * newName, const char *newAddress) : Name(newName) {
       cout << "Contact: in char constructor of " << this << endl;
       theAddress = new char[strlen(newAddress)+1];
       strcpy(theAddress, newAddress);
}

Contact::~Contact() {
       cout << "Contact: in destructor of " << this << endl;
       delete [] theAddress;
}

void Contact::setNameAddress(const char * newName, const char * newAddress) {
       setName(newName);
       delete [] theAddress;
       theAddress = new char[strlen(newAddress)+1];
       strcpy(theAddress, newAddress);
}

Contact & Contact::operator=(const Contact & rhs) {
       cout << "Contact: in operator= of " << this << endl;
       if (this == &rhs) return (*this);
       Name::operator=(rhs);
       delete [] theAddress;
       theAddress = new char[strlen(rhs.theAddress)+1];
       strcpy(theAddress, rhs.theAddress);
       return (*this);
}

void Contact::print() const {
       Name::print();
       cout << theAddress << endl;
}

