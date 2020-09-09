#include <iostream>
#include "Name.h"
#include "Contact.h"
#include "LongContact.h"

using namespace std;

int main() {

     // Base object
     cout << "Creating Name object" << endl;
     Name n;
     cout << endl << endl;

     // Default constructor
     cout << "Creating Contact object" << endl;
     Contact c;
     c.setName("TSA");
     c.print();
     c.setNameAddress("Tarek Abdelrahman", "123 Main St.");
     c.print();
     cout << endl << endl;

     // Default constructor
     cout << "Creating LongContact object" << endl;
     LongContact lc;
     lc.setNameAddress("Joe Smith", "647 Queen St.");
     lc.setPhone("000-000-0000");
     lc.print();
     cout << endl << endl;
     

     // Copy constructor
     Contact c1(c);
     c1.print();
     cout << endl << endl;

     LongContact c2(lc);
     c2.print();
     cout << endl << endl;


/*
     // String constructor
     Contact c3("Sue Martin", "123 Main St.");
     c3.print();
     cout << endl << endl;
*/

/*
     n = c;
     n.print();
     cout << endl << endl;

     c = n;
*/ 

//     These are commented out for now
//     You should uncomment and reason about what output is printed
//     Contact c4;
//     c4 = c3;
//     c3.setName("No Name");
//     c4.print();
//     cout << endl << endl;

       return (0);
}

