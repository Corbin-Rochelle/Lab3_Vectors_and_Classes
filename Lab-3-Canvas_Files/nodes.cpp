//*****************************************************************************
// purpose:  node cpp file
//
//  author: Corbin T Rochelle (ctr233)
//*****************************************************************************

#include "nodes.h"

// ---------------------------------------------------------------------
// Do NOT change this method
DataNode::~DataNode() {}
// Uses double dispatch to call the overloaded method printTo in the 
// DataNodes: StringNode, IntegerNode, and FloatNode
//
// Do NOT change this method
ostream& operator<<(ostream& os, DataNode& fn) {
	os << "Data: ";
	fn.printTo(os);
	return os;
}
