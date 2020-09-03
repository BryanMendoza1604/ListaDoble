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
	node* aux = new node(number, nullptr, nullptr);
	if (isEmpty())
	{
		first = aux;
	}
	else {
		node* temp = first;
		if (first->getNext() == NULL) {
			first->setNext(aux);
			aux->setPrior(first);
		}
		else {
			while (temp->getNext() != NULL)
			{
				temp = temp->getNext();
			}
			temp->setNext(aux);
			aux->setPrior(temp);
		}
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
	return s.str();
	
}