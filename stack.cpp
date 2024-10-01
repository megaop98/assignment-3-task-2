#include "stack.h"



stack::stack()
{
	head = NULL;
}



void stack::isEmpty()
{
	if (head == NULL) 
	{
		cout << "Stack is empty\n"; 
	}
	else
	{
		cout << "stack is not empty\n";

	}

}


void stack::push(int a)
{
	node* new_node = new node(a);
	if (head == NULL)
	{

		head = new_node;  
	}
	else
	{

		new_node->next = head; 

		head = new_node;  




	}

}

int stack::peek()
{
	if (head == NULL)
	{
		cout << "no element in the stack";

	}
	else
	{
		return head->data;  
	}


}

int stack::pop()
{
	if (head == NULL)
	{
		cout << "no element in the stack";

	}
	else
	{
		int val = head->data; 
		node* temp = head;  
		head = head->next; 
		delete temp; 
		return val;
	}


}

int stack::size()
{
	int count = 0;
	node* current = head;  

	if (head == NULL)
	{
		return count; 

	}
	else
	{
		while (current != NULL)
		{
			count++; 
			current = current->next; 


		}


		return count; 
	}





}

void stack::print()
{
	if (head == NULL)
	{
		cout << head->data;

	}
	else
	{
		bool changes = false; 
		node* current = head;
		int temp; 

		do
		{
			if (current->data > current->next->data)  
			{
				temp = current->data;   
				current->data = current->next->data; 
				current->next->data = temp; 
				changes = true; 

			}
			current = current->next; 
			{
				current = head;

			}


		} while (changes != true);

		node* n = head;

		while (n != NULL)
		{

			cout << n->data << endl;
			n = n->next; 

		}

	}

}

