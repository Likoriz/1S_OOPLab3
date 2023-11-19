#pragma once
#include <iostream>

class IIterator
{
public:
	//���������� ������ ����� ���������
	virtual double get() = 0;
	//��������� �� ��������� �������
	virtual void next() = 0;
	//��������� �� ���������� �������
	virtual void prev() = 0;
	//���������� ������ ���� ����������
	virtual bool operator==(IIterator* object) = 0;
	//���������� ������ ���� ����������
	virtual bool operator!=(IIterator* object) = 0;
};

