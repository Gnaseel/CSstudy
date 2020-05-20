#pragma once
#include<iostream>
using namespace std;
template <class T>
MyVector<T>::MyVector() {
	arr = new T[5];
	this->count = 0;
	this->size = 5;
	this->sizeCoef = 2;
}
template <class T>
MyVector<T>::~MyVector() {

}
template <class T>
void MyVector<T>::insert(T num) {

	if (count >= size) {
		T* temp = new T[size * sizeCoef];
		for (int i = 0; i < size; i++) {
			temp[i] = arr[i];
		}
		delete[] arr;
		size *= sizeCoef;
		arr = temp;
	}
	arr[count] = num;
	count++;
}
template <class T>
void MyVector<T>::remove() {
	count--;
	arr[count] = NULL;
}
template <class T>
void MyVector<T>::print() {
	cout << "-----------------------------------------" << endl;
	for (int i = 0; i < count; i++) {
		cout << arr[i] << endl;
	}
	cout << endl << "-----------------------------------------" << endl;
}
template <class T>
int MyVector<T>::get(int idx) {
	return arr[idx];
}
template <class T>
int MyVector<T>::getCount() {
	return count;
}