#pragma once
#include "IIterator.h"

class IIterable: public IIterator
{
public:
	//���������� ��������� ���������
	virtual IIterator* begin() = 0;
	//���������� �������� ���������
	virtual IIterator* end() = 0;
	//���������� ���������� ��������
	virtual int getSize() = 0;
	//��������� ������� �� �������
	virtual bool isEmpty() = 0;
	//�������� ��������� �� �������
	virtual double getByIndex(int index_) = 0;
};

