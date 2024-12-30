#pragma once
#include "arraylist.h"

// LIFO = last in first out
class Stack {
public:
	Stack();
	virtual ~Stack();

	// adds the element `e` to the stack
	virtual void push(int e) =0;

	// removes and returns the top element in the stack
	virtual int pop() =0;

	// returns the top element in the stack without removing it
	virtual int peek() =0;

private:
	ArrayList al;
};
