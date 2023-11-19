#pragma once
#include "IIterable.h"

class Array: public IIterable
{
private:
	double* arr = nullptr;
	int size;
	int index;
public:
	Array(int size_);
	~Array();
	IIterable* append(IIterable* objects);
	//Возвращает начальный контейнер
	IIterator* begin();
	//Возвращает конечный контейнер
	IIterator* end();
	//Возвращает количество объектов
	int getSize();
	//Проверяет объекты на наличие
	bool isEmpty();
	//Получает контейнер по индексу
	double getByIndex(int index_);
	//Возвращает данные этого итератора
	double get();
	//Переходит на следующий элемент
	void next();
	//Переходит на предыдущий элемент
	void prev();
	//Сравнивает данные двух итераторов
	bool operator==(IIterator* object);
	//Сравнивает данные двух итераторов
	bool operator!=(IIterator* object);

	IIterator* getIT();
};

