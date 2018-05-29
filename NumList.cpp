#include "NumList.h"

//Default ctor
NumList::NumList()
{

	size = 0;
	capacity = 12;
	numListArray = new int[capacity];

}

//Parameterized ctor
NumList::NumList(int wordLineNumber)
{
	size = 0;
	capacity = 1;
	numListArray = new int[capacity];
	numListArray[0] = wordLineNumber;
}

//Copy ctor
NumList::NumList(const NumList & nl)
{
	numListArray = NULL;
	*this = nl;

}

//Operator assigment = overloading
NumList &NumList::operator=(const NumList &rhs)
{
	if (this == rhs) {
		return *this;
	} else {
		delete[] numListArray;
		capacity = rhs.getCapacity();
		numListArray = new int[capacity];
		size = rhs.getSize();
		for (int i = 0; i < rhs.getSize() - 1; i++) {
			append(rhs.getPointer()[i]);
		}
		return *this;
	}
}

//Destructor
NumList::~NumList()
{
	capacity = 0;
	size = 0;
	delete[] numListArray;
	numListArray = nullptr;
}

bool NumList::empty() const
{
	return size <= 0;
}

bool NumList::isDataExist(int data) const
{
	for (int i = 0;i<size;i++)
	{
		if (numListArray[i] == data)
			return true;
	}

	return false;
}

bool NumList::full() const {
	return (size >= capacity);
}

void NumList::resize() {
	int newCapacity = getCapacity() * 2; // define doubled size
	int * tempArr = new int[newCapacity + 1]; // allocate new storage
	for (int i = 0; i < tempArr.getSize() - 1; i++) {
		append(tempArr.getPointer()[i]);
	}
	capacity = newCapacity; // set new lineCapacity
	delete[] linePtr; // release dynamic storage currently used by linePtr
	linePtr = tempArr; // update linePtr to new array in dynamic storage
}

void NumList::append(int data)
{

	if (!isDataExist(data))
	{
		numListArray[size] = data;
		size++;
	}

}

int NumList::getData(int position) const
{
	if (position >= 0 && position <= capacity) {
		return numListArray[position];
	}
	else
		return -1;//  ERROR '-1':position is not valid
}

bool NumList::setData(int data, int position)
{
	if (position >= 0 && position <= capacity) {
		numListArray[position] = data;
		return true;
	}
	else
		return false;
}

int NumList::getSize() const
{
	return size;
}

int NumList::getCapacity() const
{
	return capacity;
}

const int * NumList::getPointer() const
{
	return numListArray;
}