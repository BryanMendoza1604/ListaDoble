#pragma once
class node
{
public:
	node(int, node*, node*);
	~node();
	int getNumber();
	node* getNext();
	node* getPrior();
	void setNumber(int);
	void setNext(node*);
	void setPrior(node*);

private:
	int number;
	node *next;
	node *prior;
};

