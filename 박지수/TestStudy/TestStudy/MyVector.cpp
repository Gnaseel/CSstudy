#pragma once
#include "MyVector.h"
#include <iostream>
using namespace std;
MyVector::MyVector(){
		count = 0;
		sizeCoef = 5;
		arr = new int[sizeCoef];
	}
MyVector::~MyVector() {
		delete[] arr;
	};
void MyVector::insert(int num) {
		if (count == sizeCoef) {
			relocation();
		}
		arr[count] = num;
		count++;
	};
int MyVector::get(int idx) {
		return arr[idx];
	};
void MyVector::remove(int idx) {
		arr[idx] = NULL;
		count--;
	};
int MyVector::getCount() {
		return count;
	}
void MyVector::relocation() {
		sizeCoef = sizeCoef * 2;
		int* temp = new int[sizeCoef];
		for (int i = 0; i < count; i++) {
			temp[i] = arr[i];
		}
		delete[] arr;
		arr = new int[sizeCoef];
		arr = temp;
		delete[] temp;
		
	}; 
void MyVector::print() {
		for (int i = 0; i < count; i++) {
			if (arr[i] != NULL)
				cout << arr[i] << endl;
		}
	};
