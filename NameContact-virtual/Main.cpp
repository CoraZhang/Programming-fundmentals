#include <iostream>
#include <String>
#include "Name.h"
#include "Contact.h"
#include "LongContact.h"

using namespace std;

int main() {
     string typeName;
     Name * np;
     Contact * cp;
     LongContact *lcp;

     cout << endl << "Pick a type [Name|Contact|LongContact]: ";

     while (cin >> typeName) { 
        np = new Name ("Tom Johns");
        cp = new Contact ("Tarek Abdelrahman", "123 Main st.");
        lcp = new LongContact ("Mike Smith",
                                         "321 Long st.",
                                         "652-675-9898");
        Name *basep;
        if (typeName == "Name") basep=np;
        else if (typeName == "Contact") basep=cp;
        else if (typeName == "LongContact") basep=lcp;
        else {cout << "Unknown type" << endl; 
              delete np; delete cp; delete lcp;
              cout << endl<< "Pick a type [Name|Contact|LongContact]: ";
              continue;
             }

        // Because the print function is virtual, the actual 
        // function invoked is not necessarily the base class
        // one. Which print function is invoked will depend on the
        // type of the actual object pointed to by basep. This
        // object may be of type Name, type Contact, or type
        // LongContact.

        basep->print();
        cout << endl;

        // Will this invoke the "right" destructor or will it
        // cause a memory leak?
        delete basep;
       
        cout << endl;

        // Now delete the other two objects objects
        if (typeName == "Name") {delete cp; delete lcp;}
        else if (typeName == "Contact")  {delete np; delete lcp;}
        else if (typeName == "LongContact") {delete np; delete cp;}

        cout << endl << "Pick a type: ";
     }
     return (0);
}
