#include <iostream>
#include "LongContact.h"

using namespace std;

LongContact::LongContact() {
       cout << "LongContact: in default constructor of " << this << endl;
       thePhone = new char [1];
       thePhone[0] = '\0';
}

LongContact::LongContact(LongContact & c) : Contact(c) {
       cout << "LongContact: in copy constructor of " << this << endl;
       thePhone = new char[strlen(c.thePhone)+1];
       strcpy(thePhone, c.thePhone);
}

LongContact::LongContact(char * newName, char *newAddress, char * newPhone) : Contact(newName, newAddress) {
       cout << "LongContact: in char constructor of" << this << endl;
       thePhone = new char[strlen(newPhone)+1];
       strcpy(thePhone, newPhone);
}

LongContact::~LongContact() {
       cout << "LongContact: in destructor of " << this << endl;
       delete [] thePhone;
}

void LongContact::setPhone(const char * newPhone) {
       delete [] thePhone;
       thePhone = new char[strlen(newPhone)+1];
       strcpy(thePhone, newPhone);
}

LongContact & LongContact::operator=(LongContact & rhs) {
       if (this == &rhs) return (*this);
       Contact::operator=(rhs);
       delete [] thePhone;
       thePhone = new char[strlen(rhs.thePhone)+1];
       strcpy(thePhone, rhs.thePhone);
       return (*this);
}

void LongContact::print() const {
       Contact::print();
       cout << thePhone << endl;
}
