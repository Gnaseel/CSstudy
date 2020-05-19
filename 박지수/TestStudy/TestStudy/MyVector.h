#pragma once

class MyVector {
private:
	int* arr;
	int count;
	int sizeCoef;
public:
	MyVector();
	~MyVector();
	void insert(int num);
	int get(int idx);
	void remove(int idx);
	void relocation();
	void print();
	int getCount();

};