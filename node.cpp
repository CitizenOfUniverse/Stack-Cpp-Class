/*
* node.cpp - Describes methods of the node class
*/

// Preventing double including of file "stack.h"
#ifndef _STACK_H_
#define _STACK_H_
#include "stack.h"
#endif
// Preventing double including of file "node.h"
#ifndef _NODE_H_
#define _NODE_H_
#include "node.h"
#endif
// Preventing double including of file "stddef.h"
// Here "stddef.h" is needed to define NULL constant
#ifndef _STDDEF_H_
#define _STDDEF_H_
#include "stddef.h"
#endif

// node class constructor
node::node(node* prev, int data){
	this->prev = prev;
	this->data = data;
}
// "Get" method for field prev of class node
node* node::getPrev(){
	return this->prev;
}
// "Get" method for field data of class node
int node::getData(){
	return this->data;
}
