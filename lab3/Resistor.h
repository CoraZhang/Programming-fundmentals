/*
 * File: Resistor.h
 */

#ifndef RESISTOR_H
#define RESISTOR_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Resistor {
    private:
        double resistance; // resistance (in Ohms)
        string name; // C++ string holding the label
        int endpointNodeIDs[2]; // IDs of nodes it attaches to
        int rIndex; // index of resistor in resistor array
    public:
        Resistor(int rIndex_,string name_,double resistance_,int endpoints_[2]);
        // rIndex_ is the index of this resistor in the resistor array
        // endpoints_ holds the node indices to which this resistor connects
        
        ~Resistor();
        
        string getName() const; // returns the name
        
        double getResistance() const; // returns the resistance
        
        void setResistance (double resistance_);
        
        // you *may* create either of the below to print your resistor
        void print (); // prints resistor details
        friend ostream& operator<<(ostream&,const Resistor&);
};

ostream& operator<<(ostream&,const Resistor&);

#endif /* RESISTOR_H */
