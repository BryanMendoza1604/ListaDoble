#pragma once

#include <string>
#include "node.h"


class list
{
public:
	list();
	~list();
	void add(int);
	void deleteByNumber(int);
	bool isEmpty();
	std::string toString();


private:
	node* first;
};

