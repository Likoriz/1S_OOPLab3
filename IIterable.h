#pragma once
#include "IIterator.h"

class IIterable: public IIterator
{
public:
	//Возвращает начальный контейнер
	virtual IIterator* begin() = 0;
	//Возвращает конечный контейнер
	virtual IIterator* end() = 0;
	//Возвращает количество объектов
	virtual int getSize() = 0;
	//Проверяет объекты на наличие
	virtual bool isEmpty() = 0;
	//Получает контейнер по индексу
	virtual double getByIndex(int index_) = 0;
};

