#include "Array.h"
#include "ArrayIterator.h"
using namespace std;

/*OK*/Array::Array()
{
	size = 0;
	arr = nullptr;
}

/*OK*/Array::~Array()
{
	delete[] arr;
	arr = nullptr;
}

/*OK*/double* Array::get()
{
	return arr;
}

/*OK*/void Array::push(double val)
{
	double* newArr = new double[size + 1];

	for (int i = 0; i < size; i++)
		newArr[i] = arr[i];
	newArr[size] = val;

	delete[] arr;
	arr = newArr;
	size++;
}

/*OK*/void Array::pop()
{
	double* newArr = new double[size - 1];

	for (int i = 0; i < size - 1; i++)
		newArr[i] = arr[i];

	delete[] arr;
	arr = newArr;
	size--;
}

/*OK*/IIterator* Array::begin()
{
	return new ArrayIterator(this, 0);
}

/*OK*/IIterator* Array::end()
{
	return new ArrayIterator(this, size);
}

/*OK*/int Array::getSize()
{
	return size;
}

/*OK*/bool Array::isEmpty()
{
	return arr == nullptr;
}

IIterator* Array::at(int index_)
{
	if (index_ >= 0 && index_ < size)
		return 0;//arr[index_];
	else
		return 0;//1e300;
}

void Array::remove(IIterator* element)
{
	for (IIterator* i = begin(); !i->isEqual(end()); i->next())
		if (i->isEqual(element))
		{

			break;
		}
}

/*OK*/void Array::clear()
{
	delete[] arr;
	arr = nullptr;

	size = 0;
}

/*OK*/void Array::join(IIterable* container)
{
	int newSize = size + container->getSize();
	double* newArr = new double[newSize];

	for (int i = 0; i < size; i++)
		newArr[i] = arr[i];

	IIterator* iter = container->begin();
	int index = size;
	while (!iter->isEqual(container->end()))
	{
		newArr[index] = *(double*)iter->get();
		iter->next();
		index++;
	}

	delete[] arr;
	arr = newArr;
	size = newSize;
}

/*OK*/double& Array::operator[](int index_)
{
	return arr[index_];
}