#include "MyVector.h"
#pragma once

class MyStack
{
private:
	MyVector vector;
public:
	MyStack();
	~MyStack();
	void push(int num);
	void pop();
	int peek();
	void print();
};