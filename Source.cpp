#include <iostream>
#include <vector>
#include <string>
#include <string>
#include "LinkdList.h"

//���������� ����������

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
			return digit._data - _data; //��� �� �� ���� � ����� �� �������� �� �������� �������
		return _data - digit._data; //���� �������� ����� ���� ������ ���������
	}

};

int main() {
	Digit digit(5);
	Digit digit2(10);
	std::cout << digit.operator+(digit2) << std::endl;
	std::cout << digit.operator-(digit2) << std::endl;
	//std::cout << digit + digit2; ��������� ������� �������
	//std::cout << digit - digit2;��������� ������� �������



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