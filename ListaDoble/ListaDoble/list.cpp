#include "list.h"

#include <sstream>

list::list() : first(NULL) {
	
}

list::~list() {
	node* aux;
	while (first != NULL) {
		aux = first;
		first = first->getNext();
		delete aux;
	}
}

void list::add(int number) {
	node* aux;
	if (isEmpty())
	{
		aux = new node(number, NULL, NULL);
		first = aux;
		delete aux;
	}
	else {

	}
}

void list::deleteByNumber(int) {

}

bool list::isEmpty() {
	if (first == NULL)
		return true;
	return false;
}

std::string list::toString() {
	std::stringstream s;
	node* aux = first;
	while (aux != NULL)
	{
		s << aux->getNumber() << ", ";
		aux = aux->getNext();
	}
	return s.str;
	
}