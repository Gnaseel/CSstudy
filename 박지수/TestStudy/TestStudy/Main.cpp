#include <iostream>
#include "MyStack.h"
//#include "MyVector.h"
using namespace std;
int main() {

	MyStack s;
	s.push(1);
	cout << s.peek() << endl;
	s.push(2);
	cout << s.peek() << endl;
	s.push(3);
	s.pop();
	cout << s.peek() << endl;
	s.push(4);
	s.print();
	return 0;
	
}