#include "node.h"

node::node(int number, node* next, node* prior)
: number(number), next(next), prior(prior){

}

node::~node() {

}

int node::getNumber() {
	return number;
}
node* node::getNext() {
	return next;
}

node* node::getPrior() {
	return prior;
}

void node::setNumber(int number) {
	this->number = number;
}

void node::setNext(node* next) {
	this->next = next;
}

void node::setPrior(node* prior) {
	this->prior = prior;
}
