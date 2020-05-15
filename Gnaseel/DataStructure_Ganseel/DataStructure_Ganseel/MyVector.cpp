#include<iostream>
using namespace std;

#include "MyVector.h"
MyVector::MyVector() {
	arr = new int[5];
	this->count = 0;
	this->size = 5;
	this->sizeCoef = 2;
}
MyVector::~MyVector() {

}
void MyVector::insert(int num) {
	if (count >= size) {
		int* temp = new int[size];
		arr = new int[size * sizeCoef];

		for (int i = 0; i < size; i++) {
			arr[i] = temp[i];
		}
		this->size = this->size * sizeCoef;
	}
	arr[count] = num;
	count++;
}
void MyVector::remove() {
	count--;
	arr[count] = NULL;
}
void MyVector::print() {
	cout << "-----------------------------------------" << endl;
	for (int i = 0; i < count; i++) {
		cout << arr[i] << " ";
	}
	cout<<endl << "-----------------------------------------" << endl;
}
int MyVector::get(int idx) {
	return arr[idx];
}
int MyVector::getCount() {
	return count;
}