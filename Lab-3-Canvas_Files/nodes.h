//*****************************************************************************
// purpose:  my class file for lab 3
//
//  author: Corbin T Rochelle (ctr233)
//*****************************************************************************

#ifndef NODES_H
#define NODES_H

#include <iostream>
#include <string>

using namespace std;

// Abstract class. Base class for StringNode, IntegerNode, and FloatNode
//
// Do NOT change this class
class DataNode {
public:
    virtual void printTo(ostream &os) = 0; // pure virtual method, makes the class Abstract
    virtual ~DataNode();                   // labeling the destructor as virtual allows 
	                                       // the subclass destructors to be called
};
ostream& operator<<(ostream&, DataNode&);  // print method
// ---------------------------------------------------------------------
class StringNode : public DataNode {
public:
    string* mystring = nullptr;
    // Add constructor, destructor, and printTo methods
    
    StringNode(string input) { mystring = &input; }
    ~StringNode() {
        cout << "Deleting DataNode:StringNode:" << *mystring << endl;
    }
    
    void printTo(ostream &os) {
        cout << "(string: " << *mystring << ") ";
    }
};
// ---------------------------------------------------------------------
class IntegerNode : public DataNode {
public:
    int myinteger = 0;
    // Add constructor, destructor, and printTo methods
    
    IntegerNode(int input) { myinteger = input; }
    ~IntegerNode() {
        cout << "Deleting DataNode:IntegerNode:" << myinteger << endl;
    }
    
    void printTo(ostream &os) {
        cout << "(integer: " << myinteger << ") ";
    }
};
// ---------------------------------------------------------------------
class FloatNode : public DataNode {
public:
    float myfloat = 0.0;
    // Add constructor, destructor, and printTo methods
    
    FloatNode(float input) { myfloat = input; }
    ~FloatNode() {
        cout << "Deleting DataNode:FloatNode:" << myfloat << endl;
    }
    
    void printTo(ostream &os) {
        cout << "(float: " << myfloat << ") ";
    }
};

#endif /* NODES_H */
