#include "MyStack.h"
int main() {
	MyStack<int> sInt;
	MyStack<float> sFloat;
	for (int i = 0; i < 10; i++) {
		sInt.push(i);
		sFloat.push((float)i * 0.1);
	}
	sInt.print();
	sFloat.print();
	return 0;
}