#include "MyVector.h"
#pragma once
template <class T>
class MyStack
{
private:
	MyVector<T> v;
public:
	MyStack();				//������
	~MyStack();				//�Ҹ���
	void push(T num);		//���� �߰�
	int pop();				//���� ��ȯ�ϸ� ����
	int peek();			//���� ��ȯ
	void print();			//���� ���
};
#include "MyStack.hpp"
