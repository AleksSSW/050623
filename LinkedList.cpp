#include "LinkdList.h"


LinkedList::LinkedList() {
	_head = nullptr;
	_tail = nullptr;
	_numberOfElements = 0;

}

void LinkedList::Push_back(int data) {
	Node* newNode = new Node(data);
	_numberOfElements++;

	if (_head == nullptr) {
		_head = newNode;  //если в ноде нет объектов, новый объект будет и головой и хвостом
		_tail = newNode;
		return;
	}
	newNode->SetNext(_tail);  //новому ноду присвоили значение старого тэйл, а старый тэйл становится обычным объектом и кол-во объектов нода увеличивается
	_tail = newNode;
	 
		}

void LinkedList::ShowList() {
	for (Node* ptr = _tail; ptr != _head->GetNext(); ptr=ptr->GetNext())
		std::cout << ptr->GetData() << '\n';
}

Node* LinkedList::SearchByIndex(int index) {
	Node* ptr = _tail;
	int count = _numberOfElements - index;
	while (count > 0)
	{
		ptr = ptr->GetNext();
		count--;
	}
	index = _numberOfElements;

	return nullptr;
}