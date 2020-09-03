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
	void isEmpty();
	std::string toString();


private:
	node* primero;
};

