#include "MyVector.h"
#pragma once

class MyStack
{
private:
	MyVector v;
public:
	MyStack();				//������
	~MyStack();				//�Ҹ���
	void push(int num);		//���� �߰�
	int pop();				//���� ��ȯ�ϸ� ����
	int peek();			//���� ��ȯ
	void print();			//���� ���
};

