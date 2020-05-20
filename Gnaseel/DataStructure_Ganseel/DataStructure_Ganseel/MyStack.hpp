#pragma once
template <class T>
MyStack<T>::MyStack() {

}
template <class T>
MyStack<T>::~MyStack() {

}
template <class T>
void MyStack<T>::push(T num) {
	v.insert(num);
}
template <class T>
int MyStack<T>::pop() {
	int re = v.get(v.getCount());
	v.remove();
	return re;
}
template <class T>
int MyStack<T>::peek() {
	return v.get(v.getCount());
}
template <class T>
void MyStack<T>::print() {
	v.print();
}