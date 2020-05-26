#pragma once
#include <iostream>
using namespace std;
template <typename T>
class MyVector {
private:
	T* arr;
	int count;
	int sizeCoef;
public:

	MyVector();
	~MyVector();
	void insert(T num);
	T get(int idx);
	void remove(int idx);
	void relocation();
	void print();
	int getCount();

};
template <typename T>
MyVector<T>::MyVector() {
	count = 0;
	sizeCoef = 5;
	arr = new T[sizeCoef];
}
template <typename T>
MyVector<T>::~MyVector() {
	delete[] arr;
};
template <typename T>
void MyVector<T>::insert(T num) {
	if (count == sizeCoef) {
		relocation();
	}
	arr[count] = num;
	count++;
};
template <typename T>
T MyVector<T>::get(int idx) {
	return arr[idx];
};
template<typename T>
void MyVector<T>::remove(int idx) {
	
	count--;
};
template<typename T>
int MyVector<T>::getCount() {
	return count;
}
template<typename T>
void MyVector<T>::relocation() {
	sizeCoef = sizeCoef * 2;
	T* temp = new T[sizeCoef];
	for (int i = 0; i < count; i++) {
		temp[i] = arr[i];
	}
	delete[] arr;
	arr = new T[sizeCoef];
	arr = temp;
	//delete[] temp;

};
template<typename T>
void MyVector<T>::print() {
	for (int i = 0; i < count; i++) {
		cout << arr[i] << endl;
	}
};


