#ifndef _LONGCONTACT_H
#define _LONGCONTACT_H

#include "Contact.h"

class LongContact : public Contact {
        private:
            char * thePhone;

        public:
             LongContact();
             LongContact(LongContact & lc);
             LongContact(char* newName, char* newAddress, char* newPhone);
             ~LongContact();
             void setPhone(const char* newPhone);
             LongContact & operator=(LongContact & rhs);
              void print() const;
};

#endif

