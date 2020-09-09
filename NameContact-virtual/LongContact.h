#ifndef _LONGCONTACT_H
#define _LONGCONTACT_H

#include "Contact.h"

class LongContact : public Contact {
        private:
            char * thePhone;

        public:
             LongContact();
             LongContact(LongContact & lc);
             LongContact(const char * newName, const char * newAddress, const char * newPhone);
             virtual ~LongContact();
             void setPhone(const char * newPhone);
             LongContact & operator=(LongContact & rhs);
             virtual void print() const;
};

#endif

