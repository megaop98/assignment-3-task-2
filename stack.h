#include"node.h"

class stack
{
public:
	node* head;

	stack();

	void push(int);

	int pop();
	
	int peek();

	void isEmpty();
	
	int size();

	void print();
};
