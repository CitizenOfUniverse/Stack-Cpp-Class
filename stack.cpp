/*
* stack.cpp - Describes methods of the stack class
*/

//Preventing double including of file "stack.h"
#ifndef _STACK_H_
#define _STACK_H_
#include "stack.h"
#endif
//Preventing double including of file "node.h"
#ifndef _NODE_H_
#define _NODE_H_
#include "node.h"
#endif
//Preventing double including of file "stddef.h"
//Here "stddef.h" is needed to define NULL constant
#ifndef _STDDEF_H_
#define _STDDEF_H_
#include "stddef.h"
#endif

// stack class constructor. Initialises both private fields with standart constants
stack::stack(){
	size = 0;
	top = NULL;
}
// stack class destructor
stack::~stack(){
	//Memory for every node was allocated separately from every other one,
	//so we also need to delete nodes one by one
	for (int i = 0; i < this->size; i++){
		node* old_top = this->top;//Extracting top node from the stack
		this->top = this->top->getPrev();//Setting a new top in a stack
		delete old_top;//Deleting old top
	}
}
// Method needed to add ("push") data to the top of stack
void stack::push(int data){
	this->top = new node(this->top, data);//Allocating memory for a new node and initialising its fields
	if (this->top == NULL){//If memory wasn't allocated, method throws an exeption
		throw "ERROR! Couldn't allocate memory for an element.";
	}
	this->size++;//Incrementing size of the stack
}
// Method needed to delete the top of stack and return its currents useful data
int stack::pop(){
	if (this->size == 0){//If the stack is empty, there is no to return. So, method throws an exeption
		throw "ERROR! The stack is already empty.";
	}
	else{
		int r_data = this->top->getData();//Saving data of the old top needed to return
		node* old_top = this->top;//Extracting old top from the stack
		this->top = this->top->getPrev();//Setting a new top of the stack
		this->size--;//Decreasing size
		delete old_top;//Deallocating memory for the top node of the stack
		return r_data;//Returning useful data of the old top
	}
}
