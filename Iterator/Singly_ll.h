#pragma once
#include <iostream>
#include <algorithm>

struct Singly_ll_node;

class Singly_ll
{
public:
	using node = Singly_ll_node;
	using node_ptr = node*;

	void push_front(int val);

	void pop_front();

private:
	node_ptr head;
};

struct Singly_ll_iterator;

