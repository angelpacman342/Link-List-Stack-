#include "pch.h"
#include <iostream>
#include <cstdlib>
#include "stack.h"

using namespace std;

stack::stack()//constructor
{
	size = 0;
	head = NULL;
	current = NULL;
}

void stack::createNode()//creates each individual node and links them by stacking them
{
	ptr newNode = new node;
	newNode->next = NULL;
	size += 1;

	if (head == NULL)
		head = newNode;
	else
		newNode->next = head;
	head = newNode;
}

void stack::insertData()//insert the value into each individual node (the list)
{
	createNode();

	cout << "\n\nvalue : ";
	cin >> head->data;
}

void stack::print()//prints the list
{
	int s = size;

	current = head;
	cout << endl;

	while (current != NULL)
	{
		cout << "[" << s-- << "] = {" << current->data << "}" << endl;
		current = current->next;
	}
}

stack::~stack()//deconstructor
{

}