#include "NumList.h"

using namespace std;

/* Default CtoR */
NumList::NumList() {
	listSize = 0;
	listCapacity = 1;
	numListArray = new int[listCapacity];
}

/* Parameterized CtoR */
NumList::NumList(int number) {
	listSize = 1;
	listCapacity = 1;
	numListArray = new int[listCapacity];
	numListArray[0] = number;
}

/* Copy CtoR */
NumList::NumList(const NumList &nl) {
	numListArray = NULL;
	this->listCapacity = nl.listCapacity;
	this->listSize = nl.listSize;
	this->numListArray = nl.numListArray;
}

/* Get list capacity */
int NumList::getListCapacity() const{
	return listCapacity;
}

/* Get list size */
int NumList::getListSize() const {
	return listSize;
}

/* Check list is empty or not */
bool NumList::isEmpty() const {
	return (listSize <= 0);
}

/* Check list is full or not */
bool NumList::isFull() const {
	return (listSize >= listCapacity);
}

/* Get line number from specific position */
int NumList::getData(int position) const {
	if (position >= listSize)
		return -1;
	return numListArray[position];
}

/* Check if data exist in list */
bool NumList::isExist(int data) const
{
	for (int i = 0; i<listSize; i++)
	{
		if (numListArray[i] == data)
			return true;
	}
	return false;
}

/* Add new data to list */
void NumList::append(int data)
{

	if (!isExist(data))
	{
		numListArray[listSize] = data;
		listSize++;
	}

}

/* Get pointer of list */
const int * NumList::getPointer() const
{
	return numListArray;
}

/* Operator = Overloading */
NumList &NumList::operator=(const NumList &rhsNL) {
	if (this == &rhsNL) {
		return *this;
	}
	else {
		delete[] numListArray;
		listCapacity = rhsNL.getListCapacity();
		listSize = 0;
		numListArray = new int[listCapacity];
		for (int i = 0; i < rhsNL.getListSize(); i++){
			append(rhsNL.getPointer()[i]);
		}
	}
}

/* Destructor */
NumList::~NumList()
{
	delete[] numListArray;
}