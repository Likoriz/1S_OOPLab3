#include "Array.h"
using namespace std;

Array::Array(int size_)
{
	size = size_;
	arr = new double[size];
	index = 0;

	for (int i = 0; i < size; i++)
	{
		double element = rand() % 100 / 10;
		if (rand() % 2)
			element *= -1;
		element += element / 10;

		arr[i] = element;
	}
}

Array::~Array()
{
	delete[] arr;
	arr = nullptr;
}

IIterable* Array::append(IIterable* objects)
{
	int newSize = size + 1;
	IIterable* newArr = new Array(newSize);

	for (int i = 0; i < size; i++)
		newArr[i] = objects[i];

	size = newSize;

	delete[] objects;

	return newArr;
}

IIterator* Array::begin()
{
	return this;
}

IIterator* Array::end()//////////////////////////////////
{
	return this + size - 1;
}

IIterator* Array::getIT()
{
	return this + index;
}

int Array::getSize()
{
	return size;
}

bool Array::isEmpty()
{
	if (arr == nullptr)
		return true;
	else
		return false;
}

double Array::getByIndex(int index_)
{
	if (index_ >= 0 && index_ < size)
		return arr[index_];
	else
		return 1e300;
}

double Array::get()
{
	return arr[index];
}

void Array::next()///////////////////////////////////////////////////////
{
	if (index < size - 1)
		index++;
}

void Array::prev()/////////////////////////////////////////////////
{
	if (index > 0)
		index--;
}

bool Array::operator==(IIterator* object)////////////////////////////////////////////////
{
	if (get() == object->get())
		return true;
	else
		return false;
}

bool Array::operator!=(IIterator* object)////////////////////////////////////////////////
{
	if (get() != object->get())
		return false;
	else
		return true;
}