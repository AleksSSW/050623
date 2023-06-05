#pragma once
#include"Node.h"
#include <iostream>
class LinkedList {
private:
	Node* _head;
	Node* _tail;
	int _numberOfElements;
public:
	LinkedList();
	
	void Push_back(int data);
	
	void ShowList();

	Node* SearchByIndex(int index);


};