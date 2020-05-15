#include "MyStack.h"
MyStack::MyStack() {
	
}
MyStack::~MyStack() {

}
void MyStack::push(int num) {
	v.insert(num);
}
int MyStack::pop() {
	int re = v.get(v.getCount());
	v.remove();
	return re;
}
int MyStack::peek() {
	return v.get(v.getCount());
}
void MyStack::print() {
	v.print();
}