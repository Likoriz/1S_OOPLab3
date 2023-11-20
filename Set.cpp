#include "Set.h"
Set::Set(int size_)
{
	size=size_;
	arr=new double[size];
	index=0;

	for(int i=0; i<size; i++)
	{
		double element=rand()%100/10;
		bool num_dont_exist=1;
		if(rand()%2)
			element*=-1;
		element+=element/10;
		for(int j=0;j<=i;j++)
		{
			if (arr[j]==element);
			{
				num_dont_exist=0;
				break;
			}
		}
		if(num_dont_exist)
		{
			arr[i]=element;
		}
		else
			i--;
	}
}

Set::~Set()
{
	delete[] arr;
	arr=nullptr;
}

IIterable* Set::append(IIterable* objects)
{
	int newSize=size+1;
	IIterable* newArr=new Set(newSize);

	for(int i=0; i<size; i++)
		newArr[i]=objects[i];

	size=newSize;

	delete[] objects;

	return newArr;
}

IIterator* Set::begin()
{
	return this;
}

IIterator* Set::end()//////////////////////////////////
{
	return this+size-1;
}

IIterator* Set::getIT()
{
	return this+index;
}

int Set::getSize()
{
	return size;
}

bool Set::isEmpty()
{
	if(arr==nullptr)
		return true;
	else
		return false;
}

double Set::getByIndex(int index_)
{
	if(index_>=0&&index_<size)
		return arr[index_];
	else
		return 1e300;
}

double Set::get()
{
	return arr[index];
}

void Set::next()///////////////////////////////////////////////////////
{
	if(index<size-1)
		index++;
}

void Set::prev()/////////////////////////////////////////////////
{
	if(index>0)
		index--;
}

bool Set::operator==(IIterator* object)////////////////////////////////////////////////
{
	if(get()==object->get())
		return true;
	else
		return false;
}

bool Set::operator!=(IIterator* object)////////////////////////////////////////////////
{
	if(get()!=object->get())
		return false;
	else
		return true;
}