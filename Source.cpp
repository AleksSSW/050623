#include <iostream>
#include <vector>
#include <string>
#include <string>
#include "LinkdList.h"

//Перегрузка операторов

/*class Digit {
private: 
	int _data;
public:
	Digit(int data):_data(data){}
	
	int operator+(Digit &digit){
		return _data + digit._data;

	}

	int operator+(int data) {
		return _data - data + data * data / data;

	}

	int  operator-(Digit&digit) {
		if (_data < digit._data)
			return digit._data - _data; //что бы не уйти в минус мы вычитаем из большего меньшее
		return _data - digit._data; //дата нынешняя минус дата нашего аргемента
	}

};

int main() {
	Digit digit(5);
	Digit digit2(10);
	std::cout << digit.operator+(digit2) << std::endl;
	std::cout << digit.operator-(digit2) << std::endl;
	//std::cout << digit + digit2; идентично верхним записям
	//std::cout << digit - digit2;идентично верхним записям



	return 0;
}*/

int main() 
{
	LinkedList list;
	list.Push_back(109);
	list.Push_back(20);
	list.Push_back(34);
	list.Push_back(16);
	list.Push_back(85);
	list.Push_back(37);
	list.ShowList();



	return 0;
}