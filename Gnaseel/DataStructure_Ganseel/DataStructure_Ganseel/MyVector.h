#pragma once
template <class T>
class MyVector
{
private:
	T* arr;		//���� �����Ͱ� ��� �ּ�
	int count;		//���� ����
	int size;		//�迭 ũ��
	int sizeCoef;	//ũ�� ��� (���ο� ũ���� �迭 �Ҵ��� �� �󸶸�ŭ Ŀ���� �ϴ°�)
public:
	MyVector();						//������
	~MyVector();					//�Ҹ���
	void insert(T num);			//num�� �Է��� (�켱 ���ÿ��� ����� �뵵�̹Ƿ� �� �ڿ� ������ �߰�)
	int get(int idx);				//idx��ġ�� �ش��ϴ� ���� ��ȯ����
	void remove();					//���� ����(�̰͵� �ϴ� �̹��ִ� ������ ������ ����)
	void resize();					//ũ�� ����
	void copy();					//�޸� ���Ҵ� �� �� ����
	void print();					//������ �ֿܼ� ����Ʈ
	int getCount();					//count ����
};
#include "MyVector.hpp"