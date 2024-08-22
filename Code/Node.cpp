#include "stdafx.h"
#include "Node.h"

Node::Node()
	: next(nullptr)
{
}


Node::~Node()
{
}

Node* Node::getNext() const
{
	return this->next;
}

void Node::setNext(Node* _next)
{
	this->next = _next;
}

const Book&  Node::getBook() const
{
	return this->book;
}

void Node::setBook(const Book& _book)
{
	this->book = _book;
}


