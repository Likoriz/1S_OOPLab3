#pragma once
#include <iostream>

class IIterator
{
public:
	//Возвращает данные этого итератора
	virtual double get() = 0;
	//Переходит на следующий элемент
	virtual void next() = 0;
	//Переходит на предыдущий элемент
	virtual void prev() = 0;
	//Сравнивает данные двух итераторов
	virtual bool operator==(IIterator* object) = 0;
	//Сравнивает данные двух итераторов
	virtual bool operator!=(IIterator* object) = 0;
};

