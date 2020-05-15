#include "MyStack.h"
int main() {
	MyStack s;
	s.push(1);
	s.push(2);
	s.pop();
	s.push(3);
	s.push(4);
	s.print();
	return 0;
}
