#include "MyVector.h"
#pragma once
template <typename T>
class MyStack
{
private:
	MyVector<T> vector;
public:
	MyStack();
	~MyStack();
	void push(T num);
	void pop();
	T peek();
	void print();
};
template <typename T>
MyStack<T>::MyStack() {

}
template <typename T>
MyStack<T>::~MyStack() {};
template <typename T>
void MyStack<T>::push(T num) {
	vector.insert(num);
};
template <typename T>
void MyStack<T>::pop() {
	vector.remove(vector.getCount() - 1);
};
template <typename T>
T MyStack<T>::peek() {
	return vector.get(vector.getCount() - 1);
};
template <typename T>
void MyStack<T>::print() {
	vector.print();
};
