#include <iostream>

#include "list.h"

using std::cout;

int main() {
	list* listTest = new list();

	listTest->add(5);
	listTest->add(4);
	listTest->add(3);
	listTest->add(2);

	cout << listTest->toString();
	

	return 0;
}