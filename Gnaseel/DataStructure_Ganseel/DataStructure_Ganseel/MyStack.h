#include "MyVector.h"
#pragma once
template <class T>
class MyStack
{
private:
	MyVector<T> v;
public:
	MyStack();				//생성자
	~MyStack();				//소멸자
	void push(T num);		//원소 추가
	int pop();				//원소 반환하며 삭제
	int peek();			//원소 반환
	void print();			//원소 출력
};
#include "MyStack.hpp"
