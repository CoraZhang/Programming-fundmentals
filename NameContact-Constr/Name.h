#ifndef _NAME_H
#define _NAME_H

class Name {
       private:
            char * theName;

       public:
            Name();
            Name(const Name & n);
            Name(const char * newName);
            ~Name();
            void setName(const char * newName);
            Name & operator= (const Name & rhs);
            void print() const;
};

#endif
