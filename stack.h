/*
* stack.h - Contains descriptor of the class stack
*/

// Preventing double including of file "node.h"
#ifndef _NODE_H_
#define _NODE_H_
#include "node.h"
#endif
// Descriptor of the class stack - main of the project
class stack{
	node* top;//Pointer to the top node
	int size;//Size of the stack
public:
	stack();//Class constructor. Initialises both private fields
	~stack();//Class destructor
	int pop();///Method needed to delete the top of stack and return its currents useful data. If the stack is already empty, method throws an exeption (type of it is C-string).
	void push(int);// Method needed to add ("push") data to the top of stack. If there was an error in allocating memory, method throws an exeption (type of it is C-string).
};
