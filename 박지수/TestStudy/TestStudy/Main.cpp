#include <iostream>
#include "MyStack.h"
//#include "MyVector.h"
using namespace std;

int main() {

	MyStack<string> s;
	s.push("dd");

	s.push("ee");

	s.push("qq");
	s.pop();
	s.push("bb");
	s.push("uu");
	s.push("oo");
	s.push("4");
	s.print();
	return 0;
	
}