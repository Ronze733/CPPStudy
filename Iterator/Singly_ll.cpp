#include "Singly_ll.h"

struct Singly_ll_node
{
	int data;
	Singly_ll_node* next;
};

void Singly_ll::push_front(int val)
{
	auto new_node = new node{ val, NULL };
	if (head != NULL)
		new_node->next = head;
	head = new_node;
}

void Singly_ll::pop_front()
{
	auto first = head;
	if (head)
	{
		head = head->next;
		delete first;
	}
}

struct Singly_ll_iterator
{
private:
	Singly_ll::node_ptr ptr;
public:
	Singly_ll_iterator(Singly_ll::node_ptr p) : ptr(p) {}
	int& operator*() { return ptr->data; }
	Singly_ll::node_ptr get() { return ptr; }

	Singly_ll_iterator& operator++()	// 선행 증가
	{
		ptr = ptr->next;
		return *this;
	}

	Singly_ll_iterator operator++(int)	// 후행 증가
	{
		Singly_ll_iterator result = *this;
		++(*this);
		return result;
	}

	friend bool operator==(const Singly_ll_iterator& left,
		const Singly_ll_iterator& right)
	{
		return left.ptr == right.ptr;
	}

	friend bool operator!=(const Singly_ll_iterator& left,
		const Singly_ll_iterator& right)
	{
		return left.ptr != right.ptr;
	}
};


