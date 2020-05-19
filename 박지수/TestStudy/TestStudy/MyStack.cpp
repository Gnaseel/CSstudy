#include "MyStack.h"
#include <iostream>
using namespace std;

MyStack::MyStack() {

	}
MyStack::~MyStack() {};
	void MyStack::push(int num) {
		vector.insert(num);
	};
	void MyStack::pop() {
		vector.remove(vector.getCount()-1);
	};
	int MyStack::peek() {
		return vector.get(vector.getCount()-1);
	};
	void MyStack::print() {
		vector.print();
	};
