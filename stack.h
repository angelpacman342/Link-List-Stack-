#pragma once
class stack
{
public:
	stack();
	void createNode();
	void insertData();
	void print();
	~stack();

private:

	int size;

	typedef struct node
	{
		int data;
		node* next;
	}*ptr;

	ptr head, current;
};

