#ifndef _CONTACT_H
#define _CONTACT_H

#include "Name.h"

class Contact : public Name {
        private:
            char * theAddress;

        public:
             Contact();
             Contact(const Contact & c);
             Contact(const char * newName, const char * newAddress);
             ~Contact();
             void setNameAddress(const char* newName, const char * newAddress);
             Contact & operator=(const Contact & rhs);
             void print() const;
};

#endif


