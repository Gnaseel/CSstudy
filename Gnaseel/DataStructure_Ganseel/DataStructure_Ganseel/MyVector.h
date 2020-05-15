#pragma once
class MyVector
{
private:
	int* arr;		//실제 데이터가 담길 주소
	int count;		//원소 개수
	int size;		//배열 크기
	int sizeCoef;	//크기 계수 (새로운 크기의 배열 할당할 때 얼마만큼 커지게 하는가)
	
public:
	MyVector();						//생성자
	~MyVector();					//소멸자
	void insert(int num);			//num을 입력함 (우선 스택에서 사용할 용도이므로 맨 뒤에 데이터 추가)
	int get(int idx);				//idx위치에 해당하는 원소 반환받음
	void remove();					//원소 제거(이것도 일단 이번주는 마지막 데이터 삭제)
	void resize();					//크기 변경
	void copy();					//메모리 재할당 할 때 복사
	void print();					//디버깅용 콘솔에 프린트



	int getCount();					//count 접근
};

